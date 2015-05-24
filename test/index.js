var nativeExtension = require('../');
var assert = require('assert');


describe('native extension', function() {
  it('should export function that returns nothing', function() {
    assert.equal(nativeExtension.nothing(), undefined);
  });

  it('should export a function that returns a string', function() {
    assert.equal(typeof nativeExtension.aString(), 'string');
  });

  it('should export a function that returns a boolean', function() {
    assert.equal(typeof nativeExtension.aBoolean(), 'boolean');
  });

  it('should export function that returns a number', function() {
    assert.equal(typeof nativeExtension.aNumber(), 'number');
  });
});
