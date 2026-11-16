/* f_0x103096f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_103096f0(Guest* g)
{
    double d1;
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x1cu) & 0xfffffff0u;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 1056u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, in_edx);
    wr32(sp1 - 0x3f0u, in_ebx);
    wr32(sp1 - 0x3ecu, sp0 - 0x1cu);
    wr32(sp1 - 0x3e8u, sp0 - 4u);
    { /* movss xmm2, dword ptr [edx] */ uint32_t A = arg2; g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm3, dword ptr [esi] */ uint32_t A = arg1; g->xmm[3] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movaps xmm0, xmmword ptr [0x109fa790] */ uint32_t A = COW_IMG(0x109fa790u); g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [0x109fa790] */ uint32_t A = COW_IMG(0x109fa790u); g->xmm[1] = rd128(A); }
    { /* andps xmm0, xmm2 */ g->xmm[0] = sse_andps(g->xmm[0], g->xmm[2]); }
    { /* andps xmm1, xmm3 */ g->xmm[1] = sse_andps(g->xmm[1], g->xmm[3]); }
    { /* movaps xmmword ptr [esp + 0x10], xmm0 */ uint32_t A = sp1 - 0x3e0u; wr128(A, g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x20], xmm1 */ uint32_t A = sp1 - 0x3d0u; wr128(A, g->xmm[1]); }
    { /* andnps xmm0, xmm2 */ g->xmm[0] = sse_andnps(g->xmm[0], g->xmm[2]); }
    { /* andnps xmm1, xmm3 */ g->xmm[1] = sse_andnps(g->xmm[1], g->xmm[3]); }
    { /* movaps xmmword ptr [esp + 0x190], xmm0 */ uint32_t A = sp1 - 0x260u; wr128(A, g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x1a0], xmm1 */ uint32_t A = sp1 - 0x250u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* mulss xmm0, dword ptr [0x109fa780] */ uint32_t A = COW_IMG(0x109fa780u); g->xmm[0] = sse_mulss(g->xmm[0], xmm_q((uint64_t)rd32(A), 0)); }
    { /* mulss xmm1, dword ptr [0x109fa770] */ uint32_t A = COW_IMG(0x109fa770u); g->xmm[1] = sse_mulss(g->xmm[1], xmm_q((uint64_t)rd32(A), 0)); }
    { /* mulss xmm2, dword ptr [0x109fa760] */ uint32_t A = COW_IMG(0x109fa760u); g->xmm[2] = sse_mulss(g->xmm[2], xmm_q((uint64_t)rd32(A), 0)); }
    { /* mulss xmm3, dword ptr [0x109fa750] */ uint32_t A = COW_IMG(0x109fa750u); g->xmm[3] = sse_mulss(g->xmm[3], xmm_q((uint64_t)rd32(A), 0)); }
    { /* cmpnleps xmm0, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x250u; g->xmm[0] = sse_cmpps(g->xmm[0], rd128(A), 6); }
    { /* movaps xmmword ptr [esp + 0x30], xmm0 */ uint32_t A = sp1 - 0x3c0u; wr128(A, g->xmm[0]); }
    { /* cmpnleps xmm1, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x250u; g->xmm[1] = sse_cmpps(g->xmm[1], rd128(A), 6); }
    { /* andnps xmm0, xmm1 */ g->xmm[0] = sse_andnps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x40], xmm0 */ uint32_t A = sp1 - 0x3b0u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x250u; g->xmm[0] = rd128(A); }
    { /* cmpnleps xmm0, xmm3 */ g->xmm[0] = sse_cmpps(g->xmm[0], g->xmm[3], 6); }
    { /* movaps xmmword ptr [esp + 0x70], xmm0 */ uint32_t A = sp1 - 0x380u; wr128(A, g->xmm[0]); }
    { /* cmpnleps xmm2, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x250u; g->xmm[2] = sse_cmpps(g->xmm[2], rd128(A), 6); }
    { /* andnps xmm1, xmm2 */ g->xmm[1] = sse_andnps(g->xmm[1], g->xmm[2]); }
    { /* movaps xmmword ptr [esp + 0x50], xmm1 */ uint32_t A = sp1 - 0x3a0u; wr128(A, g->xmm[1]); }
    { /* cmpnleps xmm3, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x250u; g->xmm[3] = sse_cmpps(g->xmm[3], rd128(A), 6); }
    { /* andnps xmm2, xmm3 */ g->xmm[2] = sse_andnps(g->xmm[2], g->xmm[3]); }
    { /* movaps xmmword ptr [esp + 0x60], xmm2 */ uint32_t A = sp1 - 0x390u; wr128(A, g->xmm[2]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x250u; g->xmm[0] = rd128(A); }
    { /* andps xmm0, xmmword ptr [esp + 0x30] */ uint32_t A = sp1 - 0x3c0u; g->xmm[0] = sse_andps(g->xmm[0], rd128(A)); }
    { /* movaps xmm2, xmmword ptr [esp + 0x190] */ uint32_t A = sp1 - 0x260u; g->xmm[2] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x250u; g->xmm[1] = rd128(A); }
    { /* mulss xmm2, dword ptr [0x109fa740] */ uint32_t A = COW_IMG(0x109fa740u); g->xmm[2] = sse_mulss(g->xmm[2], xmm_q((uint64_t)rd32(A), 0)); }
    { /* subss xmm1, xmm2 */ g->xmm[1] = sse_subss(g->xmm[1], g->xmm[2]); }
    { /* andps xmm1, xmmword ptr [esp + 0x40] */ uint32_t A = sp1 - 0x3b0u; g->xmm[1] = sse_andps(g->xmm[1], rd128(A)); }
    { /* orps xmm0, xmm1 */ g->xmm[0] = sse_orps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm2, xmmword ptr [esp + 0x190] */ uint32_t A = sp1 - 0x260u; g->xmm[2] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x250u; g->xmm[1] = rd128(A); }
    { /* mulss xmm2, dword ptr [0x109fa730] */ uint32_t A = COW_IMG(0x109fa730u); g->xmm[2] = sse_mulss(g->xmm[2], xmm_q((uint64_t)rd32(A), 0)); }
    { /* subss xmm1, xmm2 */ g->xmm[1] = sse_subss(g->xmm[1], g->xmm[2]); }
    { /* andps xmm1, xmmword ptr [esp + 0x50] */ uint32_t A = sp1 - 0x3a0u; g->xmm[1] = sse_andps(g->xmm[1], rd128(A)); }
    { /* orps xmm0, xmm1 */ g->xmm[0] = sse_orps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm2, xmmword ptr [esp + 0x190] */ uint32_t A = sp1 - 0x260u; g->xmm[2] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x250u; g->xmm[1] = rd128(A); }
    { /* mulss xmm2, dword ptr [0x109fa720] */ uint32_t A = COW_IMG(0x109fa720u); g->xmm[2] = sse_mulss(g->xmm[2], xmm_q((uint64_t)rd32(A), 0)); }
    { /* subss xmm1, xmm2 */ g->xmm[1] = sse_subss(g->xmm[1], g->xmm[2]); }
    { /* andps xmm1, xmmword ptr [esp + 0x60] */ uint32_t A = sp1 - 0x390u; g->xmm[1] = sse_andps(g->xmm[1], rd128(A)); }
    { /* orps xmm0, xmm1 */ g->xmm[0] = sse_orps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x190] */ uint32_t A = sp1 - 0x260u; g->xmm[1] = rd128(A); }
    { /* xorps xmm1, xmmword ptr [0x109fa790] */ uint32_t A = COW_IMG(0x109fa790u); g->xmm[1] = sse_xorps(g->xmm[1], rd128(A)); }
    { /* andps xmm1, xmmword ptr [esp + 0x70] */ uint32_t A = sp1 - 0x380u; g->xmm[1] = sse_andps(g->xmm[1], rd128(A)); }
    { /* orps xmm0, xmm1 */ g->xmm[0] = sse_orps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x170], xmm0 */ uint32_t A = sp1 - 0x280u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x190] */ uint32_t A = sp1 - 0x260u; g->xmm[0] = rd128(A); }
    { /* andps xmm0, xmmword ptr [esp + 0x30] */ uint32_t A = sp1 - 0x3c0u; g->xmm[0] = sse_andps(g->xmm[0], rd128(A)); }
    { /* movaps xmm2, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x250u; g->xmm[2] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [esp + 0x190] */ uint32_t A = sp1 - 0x260u; g->xmm[1] = rd128(A); }
    { /* mulss xmm2, dword ptr [0x109fa740] */ uint32_t A = COW_IMG(0x109fa740u); g->xmm[2] = sse_mulss(g->xmm[2], xmm_q((uint64_t)rd32(A), 0)); }
    { /* addss xmm1, xmm2 */ g->xmm[1] = sse_addss(g->xmm[1], g->xmm[2]); }
    { /* andps xmm1, xmmword ptr [esp + 0x40] */ uint32_t A = sp1 - 0x3b0u; g->xmm[1] = sse_andps(g->xmm[1], rd128(A)); }
    { /* orps xmm0, xmm1 */ g->xmm[0] = sse_orps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm2, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x250u; g->xmm[2] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [esp + 0x190] */ uint32_t A = sp1 - 0x260u; g->xmm[1] = rd128(A); }
    { /* mulss xmm2, dword ptr [0x109fa730] */ uint32_t A = COW_IMG(0x109fa730u); g->xmm[2] = sse_mulss(g->xmm[2], xmm_q((uint64_t)rd32(A), 0)); }
    { /* addss xmm1, xmm2 */ g->xmm[1] = sse_addss(g->xmm[1], g->xmm[2]); }
    { /* andps xmm1, xmmword ptr [esp + 0x50] */ uint32_t A = sp1 - 0x3a0u; g->xmm[1] = sse_andps(g->xmm[1], rd128(A)); }
    { /* orps xmm0, xmm1 */ g->xmm[0] = sse_orps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm2, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x250u; g->xmm[2] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [esp + 0x190] */ uint32_t A = sp1 - 0x260u; g->xmm[1] = rd128(A); }
    { /* mulss xmm2, dword ptr [0x109fa720] */ uint32_t A = COW_IMG(0x109fa720u); g->xmm[2] = sse_mulss(g->xmm[2], xmm_q((uint64_t)rd32(A), 0)); }
    { /* addss xmm1, xmm2 */ g->xmm[1] = sse_addss(g->xmm[1], g->xmm[2]); }
    { /* andps xmm1, xmmword ptr [esp + 0x60] */ uint32_t A = sp1 - 0x390u; g->xmm[1] = sse_andps(g->xmm[1], rd128(A)); }
    { /* orps xmm0, xmm1 */ g->xmm[0] = sse_orps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x250u; g->xmm[1] = rd128(A); }
    { /* andps xmm1, xmmword ptr [esp + 0x70] */ uint32_t A = sp1 - 0x380u; g->xmm[1] = sse_andps(g->xmm[1], rd128(A)); }
    { /* orps xmm1, xmm0 */ g->xmm[1] = sse_orps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x180], xmm1 */ uint32_t A = sp1 - 0x270u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [0x109fa710] */ uint32_t A = COW_IMG(0x109fa710u); g->xmm[0] = rd128(A); }
    { /* andps xmm0, xmmword ptr [esp + 0x40] */ uint32_t A = sp1 - 0x3b0u; g->xmm[0] = sse_andps(g->xmm[0], rd128(A)); }
    { /* movaps xmm1, xmmword ptr [0x109fa700] */ uint32_t A = COW_IMG(0x109fa700u); g->xmm[1] = rd128(A); }
    { /* andps xmm1, xmmword ptr [esp + 0x50] */ uint32_t A = sp1 - 0x3a0u; g->xmm[1] = sse_andps(g->xmm[1], rd128(A)); }
    { /* orps xmm0, xmm1 */ g->xmm[0] = sse_orps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x109fa6f0] */ uint32_t A = COW_IMG(0x109fa6f0u); g->xmm[1] = rd128(A); }
    { /* andps xmm1, xmmword ptr [esp + 0x60] */ uint32_t A = sp1 - 0x390u; g->xmm[1] = sse_andps(g->xmm[1], rd128(A)); }
    { /* orps xmm0, xmm1 */ g->xmm[0] = sse_orps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x109fa6e0] */ uint32_t A = COW_IMG(0x109fa6e0u); g->xmm[1] = rd128(A); }
    { /* andps xmm1, xmmword ptr [esp + 0x70] */ uint32_t A = sp1 - 0x380u; g->xmm[1] = sse_andps(g->xmm[1], rd128(A)); }
    { /* orps xmm0, xmm1 */ g->xmm[0] = sse_orps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0xa0], xmm0 */ uint32_t A = sp1 - 0x350u; wr128(A, g->xmm[0]); }
    { /* movaps xmm2, xmmword ptr [0x109fa6d0] */ uint32_t A = COW_IMG(0x109fa6d0u); g->xmm[2] = rd128(A); }
    { /* andps xmm2, xmmword ptr [esp + 0x40] */ uint32_t A = sp1 - 0x3b0u; g->xmm[2] = sse_andps(g->xmm[2], rd128(A)); }
    { /* movaps xmm3, xmmword ptr [0x109fa6c0] */ uint32_t A = COW_IMG(0x109fa6c0u); g->xmm[3] = rd128(A); }
    { /* andps xmm3, xmmword ptr [esp + 0x50] */ uint32_t A = sp1 - 0x3a0u; g->xmm[3] = sse_andps(g->xmm[3], rd128(A)); }
    { /* orps xmm2, xmm3 */ g->xmm[2] = sse_orps(g->xmm[2], g->xmm[3]); }
    { /* movaps xmm3, xmmword ptr [0x109fa6b0] */ uint32_t A = COW_IMG(0x109fa6b0u); g->xmm[3] = rd128(A); }
    { /* andps xmm3, xmmword ptr [esp + 0x60] */ uint32_t A = sp1 - 0x390u; g->xmm[3] = sse_andps(g->xmm[3], rd128(A)); }
    { /* orps xmm2, xmm3 */ g->xmm[2] = sse_orps(g->xmm[2], g->xmm[3]); }
    { /* movaps xmm3, xmmword ptr [0x109fa6a0] */ uint32_t A = COW_IMG(0x109fa6a0u); g->xmm[3] = rd128(A); }
    { /* andps xmm3, xmmword ptr [esp + 0x70] */ uint32_t A = sp1 - 0x380u; g->xmm[3] = sse_andps(g->xmm[3], rd128(A)); }
    { /* orps xmm2, xmm3 */ g->xmm[2] = sse_orps(g->xmm[2], g->xmm[3]); }
    { /* movaps xmmword ptr [esp + 0xb0], xmm2 */ uint32_t A = sp1 - 0x340u; wr128(A, g->xmm[2]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x170] */ uint32_t A = sp1 - 0x280u; g->xmm[0] = rd128(A); }
    { /* cvtps2pd xmm0, xmm0 */ g->xmm[0] = sse_cvtps2pd(g->xmm[0]); }
    { /* movapd xmmword ptr [esp + 0xc0], xmm0 */ uint32_t A = sp1 - 0x330u; wr128(A, g->xmm[0]); }
    { /* movaps xmm2, xmmword ptr [esp + 0x180] */ uint32_t A = sp1 - 0x270u; g->xmm[2] = rd128(A); }
    { /* cvtps2pd xmm2, xmm2 */ g->xmm[2] = sse_cvtps2pd(g->xmm[2]); }
    { /* movapd xmmword ptr [esp + 0xe0], xmm2 */ uint32_t A = sp1 - 0x310u; wr128(A, g->xmm[2]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x180] */ uint32_t A = sp1 - 0x270u; g->xmm[0] = rd128(A); }
    { /* rcpss xmm0, xmm0 */ g->xmm[0] = sse_rcpss(g->xmm[0], g->xmm[0]); }
    { /* cvtps2pd xmm0, xmm0 */ g->xmm[0] = sse_cvtps2pd(g->xmm[0]); }
    { /* movapd xmmword ptr [esp + 0x110], xmm0 */ uint32_t A = sp1 - 0x2e0u; wr128(A, g->xmm[0]); }
    { /* mulpd xmm0, xmmword ptr [esp + 0xe0] */ uint32_t A = sp1 - 0x310u; g->xmm[0] = sse_mulpd(g->xmm[0], rd128(A)); }
    { /* movapd xmmword ptr [esp + 0x130], xmm0 */ uint32_t A = sp1 - 0x2c0u; wr128(A, g->xmm[0]); }
    { /* mulpd xmm0, xmm0 */ g->xmm[0] = sse_mulpd(g->xmm[0], g->xmm[0]); }
    { /* movapd xmm2, xmmword ptr [0x109fa690] */ uint32_t A = COW_IMG(0x109fa690u); g->xmm[2] = rd128(A); }
    { /* subpd xmm2, xmmword ptr [esp + 0x130] */ uint32_t A = sp1 - 0x2c0u; g->xmm[2] = sse_subpd(g->xmm[2], rd128(A)); }
    { /* movapd xmmword ptr [esp + 0x150], xmm2 */ uint32_t A = sp1 - 0x2a0u; wr128(A, g->xmm[2]); }
    { /* subpd xmm2, xmmword ptr [esp + 0x130] */ uint32_t A = sp1 - 0x2c0u; g->xmm[2] = sse_subpd(g->xmm[2], rd128(A)); }
    { /* addpd xmm0, xmm2 */ g->xmm[0] = sse_addpd(g->xmm[0], g->xmm[2]); }
    { /* mulpd xmm0, xmmword ptr [esp + 0x150] */ uint32_t A = sp1 - 0x2a0u; g->xmm[0] = sse_mulpd(g->xmm[0], rd128(A)); }
    { /* mulpd xmm0, xmmword ptr [esp + 0x110] */ uint32_t A = sp1 - 0x2e0u; g->xmm[0] = sse_mulpd(g->xmm[0], rd128(A)); }
    { /* mulpd xmm0, xmmword ptr [esp + 0xc0] */ uint32_t A = sp1 - 0x330u; g->xmm[0] = sse_mulpd(g->xmm[0], rd128(A)); }
    { /* movapd xmmword ptr [esp + 0x1b0], xmm0 */ uint32_t A = sp1 - 0x240u; wr128(A, g->xmm[0]); }
    { /* andpd xmm0, xmmword ptr [0x109fa680] */ uint32_t A = COW_IMG(0x109fa680u); g->xmm[0] = sse_andpd(g->xmm[0], rd128(A)); }
    { /* cvtpd2ps xmm2, xmm0 */ g->xmm[2] = sse_cvtpd2ps(g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x1d0], xmm2 */ uint32_t A = sp1 - 0x220u; wr128(A, g->xmm[2]); }
    { /* movapd xmm2, xmmword ptr [esp + 0x1b0] */ uint32_t A = sp1 - 0x240u; g->xmm[2] = rd128(A); }
    { /* subpd xmm2, xmm0 */ g->xmm[2] = sse_subpd(g->xmm[2], g->xmm[0]); }
    { /* cvtpd2ps xmm0, xmm2 */ g->xmm[0] = sse_cvtpd2ps(g->xmm[2]); }
    { /* movaps xmmword ptr [esp + 0x100], xmm0 */ uint32_t A = sp1 - 0x2f0u; wr128(A, g->xmm[0]); }
    { /* movss xmm0, dword ptr [edx] */ uint32_t A = arg2; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm1, dword ptr [edx] */ uint32_t A = arg2; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm2, dword ptr [esi] */ uint32_t A = arg1; g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm3, dword ptr [esi] */ uint32_t A = arg1; g->xmm[3] = xmm_q((uint64_t)rd32(A), 0); }
    { /* andps xmm0, xmmword ptr [0x109fa670] */ uint32_t A = COW_IMG(0x109fa670u); g->xmm[0] = sse_andps(g->xmm[0], rd128(A)); }
    { /* andps xmm1, xmmword ptr [0x109fa670] */ uint32_t A = COW_IMG(0x109fa670u); g->xmm[1] = sse_andps(g->xmm[1], rd128(A)); }
    { /* andps xmm2, xmmword ptr [0x109fa670] */ uint32_t A = COW_IMG(0x109fa670u); g->xmm[2] = sse_andps(g->xmm[2], rd128(A)); }
    { /* andps xmm3, xmmword ptr [0x109fa670] */ uint32_t A = COW_IMG(0x109fa670u); g->xmm[3] = sse_andps(g->xmm[3], rd128(A)); }
    { /* cmpnltps xmm0, xmmword ptr [0x109fa660] */ uint32_t A = COW_IMG(0x109fa660u); g->xmm[0] = sse_cmpps(g->xmm[0], rd128(A), 5); }
    { /* cmpltps xmm1, xmmword ptr [0x109fa650] */ uint32_t A = COW_IMG(0x109fa650u); g->xmm[1] = sse_cmpps(g->xmm[1], rd128(A), 1); }
    { /* cmpnltps xmm2, xmmword ptr [0x109fa660] */ uint32_t A = COW_IMG(0x109fa660u); g->xmm[2] = sse_cmpps(g->xmm[2], rd128(A), 5); }
    { /* cmpltps xmm3, xmmword ptr [0x109fa650] */ uint32_t A = COW_IMG(0x109fa650u); g->xmm[3] = sse_cmpps(g->xmm[3], rd128(A), 1); }
    { /* andps xmm0, xmm1 */ g->xmm[0] = sse_andps(g->xmm[0], g->xmm[1]); }
    { /* andps xmm2, xmm3 */ g->xmm[2] = sse_andps(g->xmm[2], g->xmm[3]); }
    { /* andps xmm0, xmm2 */ g->xmm[0] = sse_andps(g->xmm[0], g->xmm[2]); }
    eax = sp0 - 0x1cu;
    { /* movmskps eax, xmm0 */ eax = (uint32_t)(sse_movmskps(g->xmm[0])); }
    if (!(eax & 1u))
    {
        d1 = (double)(float)fr(g, atan2((double)rdf32(arg1), (double)rdf32(arg2)));
        wrf32(sp1 - 0x3e0u, (float)d1);
        { /* movss xmm0, dword ptr [esp + 0x10] */ uint32_t A = sp1 - 0x3e0u; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    }
    else
    {
        { /* movaps xmm1, xmmword ptr [0x109fa640] */ uint32_t A = COW_IMG(0x109fa640u); g->xmm[1] = rd128(A); }
        { /* movaps xmm0, xmmword ptr [esp + 0x10] */ uint32_t A = sp1 - 0x3e0u; g->xmm[0] = rd128(A); }
        { /* psrad xmm0, 0x1f */ g->xmm[0] = sse2_psrad(g->xmm[0], (uint64_t)0x1Fu); }
        { /* andps xmm1, xmm0 */ g->xmm[1] = sse_andps(g->xmm[1], g->xmm[0]); }
        { /* andps xmm0, xmmword ptr [0x109fa630] */ uint32_t A = COW_IMG(0x109fa630u); g->xmm[0] = sse_andps(g->xmm[0], rd128(A)); }
        { /* movaps xmmword ptr [esp + 0x80], xmm1 */ uint32_t A = sp1 - 0x370u; wr128(A, g->xmm[1]); }
        { /* movaps xmmword ptr [esp + 0x90], xmm0 */ uint32_t A = sp1 - 0x360u; wr128(A, g->xmm[0]); }
        { /* movaps xmm1, xmmword ptr [esp + 0x1d0] */ uint32_t A = sp1 - 0x220u; g->xmm[1] = rd128(A); }
        { /* mulps xmm1, xmmword ptr [esp + 0x1d0] */ uint32_t A = sp1 - 0x220u; g->xmm[1] = sse_mulps(g->xmm[1], rd128(A)); }
        { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
        { /* mulps xmm1, xmm1 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[1]); }
        { /* movaps xmm2, xmmword ptr [0x109fa620] */ uint32_t A = COW_IMG(0x109fa620u); g->xmm[2] = rd128(A); }
        { /* movaps xmm3, xmmword ptr [0x109fa610] */ uint32_t A = COW_IMG(0x109fa610u); g->xmm[3] = rd128(A); }
        { /* mulps xmm2, xmm1 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[1]); }
        { /* mulps xmm3, xmm1 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[1]); }
        { /* addps xmm2, xmmword ptr [0x109fa600] */ uint32_t A = COW_IMG(0x109fa600u); g->xmm[2] = sse_addps(g->xmm[2], rd128(A)); }
        { /* addps xmm3, xmmword ptr [0x109fa5f0] */ uint32_t A = COW_IMG(0x109fa5f0u); g->xmm[3] = sse_addps(g->xmm[3], rd128(A)); }
        { /* mulps xmm2, xmm1 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[1]); }
        { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
        { /* addps xmm2, xmm3 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[3]); }
        { /* mulps xmm2, xmmword ptr [esp + 0x1d0] */ uint32_t A = sp1 - 0x220u; g->xmm[2] = sse_mulps(g->xmm[2], rd128(A)); }
        { /* movaps xmm1, xmmword ptr [esp + 0x1d0] */ uint32_t A = sp1 - 0x220u; g->xmm[1] = rd128(A); }
        { /* movaps xmm0, xmmword ptr [esp + 0x1d0] */ uint32_t A = sp1 - 0x220u; g->xmm[0] = rd128(A); }
        { /* andps xmm0, xmmword ptr [0x109fa5e0] */ uint32_t A = COW_IMG(0x109fa5e0u); g->xmm[0] = sse_andps(g->xmm[0], rd128(A)); }
        { /* movaps xmmword ptr [esp + 0x1d0], xmm0 */ uint32_t A = sp1 - 0x220u; wr128(A, g->xmm[0]); }
        { /* subps xmm1, xmm0 */ g->xmm[1] = sse_subps(g->xmm[1], g->xmm[0]); }
        { /* movaps xmmword ptr [esp + 0x1e0], xmm1 */ uint32_t A = sp1 - 0x210u; wr128(A, g->xmm[1]); }
        { /* movaps xmm1, xmmword ptr [esp + 0x10] */ uint32_t A = sp1 - 0x3e0u; g->xmm[1] = rd128(A); }
        { /* xorps xmm1, xmmword ptr [esp + 0x90] */ uint32_t A = sp1 - 0x360u; g->xmm[1] = sse_xorps(g->xmm[1], rd128(A)); }
        { /* movaps xmm0, xmmword ptr [esp + 0x100] */ uint32_t A = sp1 - 0x2f0u; g->xmm[0] = rd128(A); }
        { /* addps xmm0, xmmword ptr [esp + 0xa0] */ uint32_t A = sp1 - 0x350u; g->xmm[0] = sse_addps(g->xmm[0], rd128(A)); }
        { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
        { /* addps xmm0, xmmword ptr [esp + 0x1e0] */ uint32_t A = sp1 - 0x210u; g->xmm[0] = sse_addps(g->xmm[0], rd128(A)); }
        { /* addps xmm2, xmm0 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[0]); }
        { /* addps xmm2, xmmword ptr [esp + 0x1d0] */ uint32_t A = sp1 - 0x220u; g->xmm[2] = sse_addps(g->xmm[2], rd128(A)); }
        { /* addps xmm2, xmmword ptr [esp + 0xb0] */ uint32_t A = sp1 - 0x340u; g->xmm[2] = sse_addps(g->xmm[2], rd128(A)); }
        { /* orps xmm2, xmmword ptr [esp + 0x10] */ uint32_t A = sp1 - 0x3e0u; g->xmm[2] = sse_orps(g->xmm[2], rd128(A)); }
        { /* addps xmm2, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x370u; g->xmm[2] = sse_addps(g->xmm[2], rd128(A)); }
        { /* orps xmm2, xmmword ptr [esp + 0x20] */ uint32_t A = sp1 - 0x3d0u; g->xmm[2] = sse_orps(g->xmm[2], rd128(A)); }
        { /* movss xmm0, xmm2 */ g->xmm[0].d[0] = g->xmm[2].d[0]; }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103096f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_103096f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
