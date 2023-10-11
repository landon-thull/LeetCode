class Solution:
  def maxProfit(self, prices: List[int]) -> int:
    # init max_profit, stores max profit found
    max_profit = 0
    # init min_price, stores lowest price found
    min_price = float('inf')
    # iterate for price in prices
    for price in prices:
      # if price < min_price, min_price = price
      if price < min_price:
        min_price = price

      # if price - min_price > max_profit, max_profit = price - min_price
      if price - min_price > max_profit:
        max_profit = price - min_price

    # return max_profit
    return max_profit        