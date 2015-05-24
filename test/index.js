var nativeExtension = require('../');
var assert = require('assert');


describe('native extension', function() {
  it('should export nothing', function() {
    assert.equal(nativeExtension.nothing(), undefined);
  });

  it('should export a string', function() {
    assert.equal(typeof nativeExtension.aString(), 'string');
  });

  it('should export a boolean', function() {
    assert.equal(typeof nativeExtension.aBoolean(), 'boolean');
  });
});
