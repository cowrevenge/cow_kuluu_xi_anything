/* f_0x102ce090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102ce090(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 696u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x2a0u, in_esi);
    eax = arg1;
L_102ce0a6: ;
    { /* movaps xmm7, xmmword ptr [eax + 0x1b8] */ uint32_t A = eax + 0x1b8u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x130], xmm7 */ uint32_t A = sp1 - 0x170u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0x1a8] */ uint32_t A = eax + 0x1a8u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x210], xmm7 */ uint32_t A = sp1 - 0x90u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0x198] */ uint32_t A = eax + 0x198u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x230], xmm7 */ uint32_t A = sp1 - 0x70u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0x188] */ uint32_t A = eax + 0x188u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x1c0], xmm7 */ uint32_t A = sp1 - 0xe0u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0x178] */ uint32_t A = eax + 0x178u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x160], xmm7 */ uint32_t A = sp1 - 0x140u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0x168] */ uint32_t A = eax + 0x168u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x200], xmm7 */ uint32_t A = sp1 - 0xa0u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0x158] */ uint32_t A = eax + 0x158u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x180], xmm7 */ uint32_t A = sp1 - 0x120u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0x148] */ uint32_t A = eax + 0x148u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x1e0], xmm7 */ uint32_t A = sp1 - 0xc0u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0x138] */ uint32_t A = eax + 0x138u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x1a0], xmm7 */ uint32_t A = sp1 - 0x100u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0x128] */ uint32_t A = eax + 0x128u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x220], xmm7 */ uint32_t A = sp1 - 0x80u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0x118] */ uint32_t A = eax + 0x118u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x140], xmm7 */ uint32_t A = sp1 - 0x160u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0x108] */ uint32_t A = eax + 0x108u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x150], xmm7 */ uint32_t A = sp1 - 0x150u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0xf8] */ uint32_t A = eax + 0xf8u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x170], xmm7 */ uint32_t A = sp1 - 0x130u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0xe8] */ uint32_t A = eax + 0xe8u; g->xmm[7] = rd128(A); }
    { /* movaps xmm0, xmmword ptr [eax + 0x228] */ uint32_t A = eax + 0x228u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x190], xmm7 */ uint32_t A = sp1 - 0x110u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0xd8] */ uint32_t A = eax + 0xd8u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x1b0], xmm7 */ uint32_t A = sp1 - 0xf0u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0xc8] */ uint32_t A = eax + 0xc8u; g->xmm[7] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [eax + 0x218] */ uint32_t A = eax + 0x218u; g->xmm[1] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x1d0], xmm7 */ uint32_t A = sp1 - 0xd0u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax + 0xb8] */ uint32_t A = eax + 0xb8u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x1f0], xmm7 */ uint32_t A = sp1 - 0xb0u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [0x103449c0] */ uint32_t A = COW_IMG(0x103449c0u); g->xmm[7] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [eax + 0x208] */ uint32_t A = eax + 0x208u; g->xmm[2] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xa0], xmm0 */ uint32_t A = sp1 - 0x200u; wr128(A, g->xmm[0]); }
    { /* mulps xmm7, xmm0 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x103449b0] */ uint32_t A = COW_IMG(0x103449b0u); g->xmm[0] = rd128(A); }
    { /* movaps xmm3, xmmword ptr [eax + 0x1f8] */ uint32_t A = eax + 0x1f8u; g->xmm[3] = rd128(A); }
    { /* mulps xmm0, xmm1 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x60], xmm0 */ uint32_t A = sp1 - 0x240u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x103449a0] */ uint32_t A = COW_IMG(0x103449a0u); g->xmm[0] = rd128(A); }
    { /* movaps xmm4, xmmword ptr [eax + 0x1e8] */ uint32_t A = eax + 0x1e8u; g->xmm[4] = rd128(A); }
    { /* mulps xmm0, xmm2 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[2]); }
    { /* movaps xmmword ptr [esp + 0x40], xmm0 */ uint32_t A = sp1 - 0x260u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344990] */ uint32_t A = COW_IMG(0x10344990u); g->xmm[0] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [eax + 0x1d8] */ uint32_t A = eax + 0x1d8u; g->xmm[5] = rd128(A); }
    { /* mulps xmm0, xmm3 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[3]); }
    { /* movaps xmmword ptr [esp + 0x20], xmm0 */ uint32_t A = sp1 - 0x280u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344980] */ uint32_t A = COW_IMG(0x10344980u); g->xmm[0] = rd128(A); }
    { /* movaps xmm6, xmmword ptr [eax + 0x1c8] */ uint32_t A = eax + 0x1c8u; g->xmm[6] = rd128(A); }
    { /* mulps xmm0, xmm4 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[4]); }
    { /* movaps xmmword ptr [esp + 0x10], xmm0 */ uint32_t A = sp1 - 0x290u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344970] */ uint32_t A = COW_IMG(0x10344970u); g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xd0], xmm1 */ uint32_t A = sp1 - 0x1d0u; wr128(A, g->xmm[1]); }
    { /* mulps xmm0, xmm5 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[5]); }
    { /* movaps xmmword ptr [esp + 0x90], xmm0 */ uint32_t A = sp1 - 0x210u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344960] */ uint32_t A = COW_IMG(0x10344960u); g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xf0], xmm2 */ uint32_t A = sp1 - 0x1b0u; wr128(A, g->xmm[2]); }
    { /* mulps xmm0, xmm6 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[6]); }
    { /* movaps xmmword ptr [esp + 0x100], xmm0 */ uint32_t A = sp1 - 0x1a0u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344950] */ uint32_t A = COW_IMG(0x10344950u); g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x110], xmm3 */ uint32_t A = sp1 - 0x190u; wr128(A, g->xmm[3]); }
    { /* mulps xmm0, xmmword ptr [esp + 0x130] */ uint32_t A = sp1 - 0x170u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x70], xmm0 */ uint32_t A = sp1 - 0x230u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344940] */ uint32_t A = COW_IMG(0x10344940u); g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xc0], xmm4 */ uint32_t A = sp1 - 0x1e0u; wr128(A, g->xmm[4]); }
    { /* mulps xmm0, xmmword ptr [esp + 0x210] */ uint32_t A = sp1 - 0x90u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0xb0], xmm0 */ uint32_t A = sp1 - 0x1f0u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344930] */ uint32_t A = COW_IMG(0x10344930u); g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xe0], xmm5 */ uint32_t A = sp1 - 0x1c0u; wr128(A, g->xmm[5]); }
    { /* mulps xmm0, xmmword ptr [esp + 0x230] */ uint32_t A = sp1 - 0x70u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x50], xmm0 */ uint32_t A = sp1 - 0x250u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344920] */ uint32_t A = COW_IMG(0x10344920u); g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x30], xmm6 */ uint32_t A = sp1 - 0x270u; wr128(A, g->xmm[6]); }
    { /* mulps xmm0, xmmword ptr [esp + 0x1c0] */ uint32_t A = sp1 - 0xe0u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x80], xmm7 */ uint32_t A = sp1 - 0x220u; wr128(A, g->xmm[7]); }
    { /* movaps xmmword ptr [esp + 0x120], xmm0 */ uint32_t A = sp1 - 0x180u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344910] */ uint32_t A = COW_IMG(0x10344910u); g->xmm[0] = rd128(A); }
    { /* movaps xmm6, xmmword ptr [0x10344850] */ uint32_t A = COW_IMG(0x10344850u); g->xmm[6] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0x160] */ uint32_t A = sp1 - 0x140u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x280], xmm0 */ uint32_t A = sp1 - 0x20u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344900] */ uint32_t A = COW_IMG(0x10344900u); g->xmm[0] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [0x10344860] */ uint32_t A = COW_IMG(0x10344860u); g->xmm[5] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0x200] */ uint32_t A = sp1 - 0xa0u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x260], xmm0 */ uint32_t A = sp1 - 0x40u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x103448f0] */ uint32_t A = COW_IMG(0x103448f0u); g->xmm[0] = rd128(A); }
    { /* mulps xmm6, xmmword ptr [esp + 0x1f0] */ uint32_t A = sp1 - 0xb0u; g->xmm[6] = sse_mulps(g->xmm[6], rd128(A)); }
    { /* mulps xmm0, xmmword ptr [esp + 0x180] */ uint32_t A = sp1 - 0x120u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmm4, xmmword ptr [0x10344870] */ uint32_t A = COW_IMG(0x10344870u); g->xmm[4] = rd128(A); }
    { /* mulps xmm5, xmmword ptr [esp + 0x1d0] */ uint32_t A = sp1 - 0xd0u; g->xmm[5] = sse_mulps(g->xmm[5], rd128(A)); }
    { /* movaps xmm3, xmmword ptr [0x10344880] */ uint32_t A = COW_IMG(0x10344880u); g->xmm[3] = rd128(A); }
    { /* mulps xmm4, xmmword ptr [esp + 0x1b0] */ uint32_t A = sp1 - 0xf0u; g->xmm[4] = sse_mulps(g->xmm[4], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x240], xmm0 */ uint32_t A = sp1 - 0x60u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x103448e0] */ uint32_t A = COW_IMG(0x103448e0u); g->xmm[0] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [0x10344890] */ uint32_t A = COW_IMG(0x10344890u); g->xmm[2] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0x1e0] */ uint32_t A = sp1 - 0xc0u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* mulps xmm3, xmmword ptr [esp + 0x190] */ uint32_t A = sp1 - 0x110u; g->xmm[3] = sse_mulps(g->xmm[3], rd128(A)); }
    { /* movaps xmm1, xmmword ptr [0x103448a0] */ uint32_t A = COW_IMG(0x103448a0u); g->xmm[1] = rd128(A); }
    { /* mulps xmm2, xmmword ptr [esp + 0x170] */ uint32_t A = sp1 - 0x130u; g->xmm[2] = sse_mulps(g->xmm[2], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x270], xmm0 */ uint32_t A = sp1 - 0x30u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x103448d0] */ uint32_t A = COW_IMG(0x103448d0u); g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x100u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* mulps xmm1, xmmword ptr [esp + 0x150] */ uint32_t A = sp1 - 0x150u; g->xmm[1] = sse_mulps(g->xmm[1], rd128(A)); }
    { /* addps xmm6, xmm5 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[5]); }
    { /* movaps xmmword ptr [esp + 0x250], xmm0 */ uint32_t A = sp1 - 0x50u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x103448c0] */ uint32_t A = COW_IMG(0x103448c0u); g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm4 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[4]); }
    { /* mulps xmm0, xmmword ptr [esp + 0x220] */ uint32_t A = sp1 - 0x80u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* addps xmm6, xmm3 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[3]); }
    { /* movaps xmmword ptr [esp + 0x290], xmm0 */ uint32_t A = sp1 - 0x10u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x103448b0] */ uint32_t A = COW_IMG(0x103448b0u); g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0x140] */ uint32_t A = sp1 - 0x160u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* addps xmm6, xmm2 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[2]); }
    { /* addps xmm6, xmm1 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x60] */ uint32_t A = sp1 - 0x240u; g->xmm[1] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x290] */ uint32_t A = sp1 - 0x10u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x250] */ uint32_t A = sp1 - 0x50u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x270] */ uint32_t A = sp1 - 0x30u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x240] */ uint32_t A = sp1 - 0x60u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x260] */ uint32_t A = sp1 - 0x40u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x280] */ uint32_t A = sp1 - 0x20u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x120] */ uint32_t A = sp1 - 0x180u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x50] */ uint32_t A = sp1 - 0x250u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0xb0] */ uint32_t A = sp1 - 0x1f0u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x70] */ uint32_t A = sp1 - 0x230u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x100] */ uint32_t A = sp1 - 0x1a0u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x90] */ uint32_t A = sp1 - 0x210u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x10] */ uint32_t A = sp1 - 0x290u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x20] */ uint32_t A = sp1 - 0x280u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x40] */ uint32_t A = sp1 - 0x260u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmm6 */ g->xmm[0] = g->xmm[6]; }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x220u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x120], xmm0 */ uint32_t A = sp1 - 0x180u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344840] */ uint32_t A = COW_IMG(0x10344840u); g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0xa0] */ uint32_t A = sp1 - 0x200u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x50], xmm0 */ uint32_t A = sp1 - 0x250u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344830] */ uint32_t A = COW_IMG(0x10344830u); g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0xd0] */ uint32_t A = sp1 - 0x1d0u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0xb0], xmm0 */ uint32_t A = sp1 - 0x1f0u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344820] */ uint32_t A = COW_IMG(0x10344820u); g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0xf0] */ uint32_t A = sp1 - 0x1b0u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x70], xmm0 */ uint32_t A = sp1 - 0x230u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344810] */ uint32_t A = COW_IMG(0x10344810u); g->xmm[0] = rd128(A); }
    { /* movaps xmm6, xmmword ptr [0x103446d0] */ uint32_t A = COW_IMG(0x103446d0u); g->xmm[6] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0x110] */ uint32_t A = sp1 - 0x190u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x100], xmm0 */ uint32_t A = sp1 - 0x1a0u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344800] */ uint32_t A = COW_IMG(0x10344800u); g->xmm[0] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [0x103446e0] */ uint32_t A = COW_IMG(0x103446e0u); g->xmm[5] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0xc0] */ uint32_t A = sp1 - 0x1e0u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x90], xmm0 */ uint32_t A = sp1 - 0x210u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x103447f0] */ uint32_t A = COW_IMG(0x103447f0u); g->xmm[0] = rd128(A); }
    { /* mulps xmm6, xmmword ptr [esp + 0x1f0] */ uint32_t A = sp1 - 0xb0u; g->xmm[6] = sse_mulps(g->xmm[6], rd128(A)); }
    { /* mulps xmm0, xmmword ptr [esp + 0xe0] */ uint32_t A = sp1 - 0x1c0u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x10], xmm0 */ uint32_t A = sp1 - 0x290u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x103447e0] */ uint32_t A = COW_IMG(0x103447e0u); g->xmm[0] = rd128(A); }
    { /* movaps xmm4, xmmword ptr [0x103446f0] */ uint32_t A = COW_IMG(0x103446f0u); g->xmm[4] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0x30] */ uint32_t A = sp1 - 0x270u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x20], xmm0 */ uint32_t A = sp1 - 0x280u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x103447d0] */ uint32_t A = COW_IMG(0x103447d0u); g->xmm[0] = rd128(A); }
    { /* mulps xmm5, xmmword ptr [esp + 0x1d0] */ uint32_t A = sp1 - 0xd0u; g->xmm[5] = sse_mulps(g->xmm[5], rd128(A)); }
    { /* mulps xmm0, xmmword ptr [esp + 0x130] */ uint32_t A = sp1 - 0x170u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x40], xmm0 */ uint32_t A = sp1 - 0x260u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x103447c0] */ uint32_t A = COW_IMG(0x103447c0u); g->xmm[0] = rd128(A); }
    { /* movaps xmm3, xmmword ptr [0x10344700] */ uint32_t A = COW_IMG(0x10344700u); g->xmm[3] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0x210] */ uint32_t A = sp1 - 0x90u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x60], xmm0 */ uint32_t A = sp1 - 0x240u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x103447b0] */ uint32_t A = COW_IMG(0x103447b0u); g->xmm[0] = rd128(A); }
    { /* mulps xmm4, xmmword ptr [esp + 0x1b0] */ uint32_t A = sp1 - 0xf0u; g->xmm[4] = sse_mulps(g->xmm[4], rd128(A)); }
    { /* mulps xmm0, xmmword ptr [esp + 0x230] */ uint32_t A = sp1 - 0x70u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x80], xmm0 */ uint32_t A = sp1 - 0x220u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x103447a0] */ uint32_t A = COW_IMG(0x103447a0u); g->xmm[0] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [0x10344710] */ uint32_t A = COW_IMG(0x10344710u); g->xmm[2] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0x1c0] */ uint32_t A = sp1 - 0xe0u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0xa0], xmm0 */ uint32_t A = sp1 - 0x200u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344790] */ uint32_t A = COW_IMG(0x10344790u); g->xmm[0] = rd128(A); }
    { /* mulps xmm3, xmmword ptr [esp + 0x190] */ uint32_t A = sp1 - 0x110u; g->xmm[3] = sse_mulps(g->xmm[3], rd128(A)); }
    { /* mulps xmm0, xmmword ptr [esp + 0x160] */ uint32_t A = sp1 - 0x140u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0xd0], xmm0 */ uint32_t A = sp1 - 0x1d0u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344780] */ uint32_t A = COW_IMG(0x10344780u); g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [0x10344720] */ uint32_t A = COW_IMG(0x10344720u); g->xmm[1] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0x200] */ uint32_t A = sp1 - 0xa0u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0xf0], xmm0 */ uint32_t A = sp1 - 0x1b0u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344770] */ uint32_t A = COW_IMG(0x10344770u); g->xmm[0] = rd128(A); }
    { /* mulps xmm2, xmmword ptr [esp + 0x170] */ uint32_t A = sp1 - 0x130u; g->xmm[2] = sse_mulps(g->xmm[2], rd128(A)); }
    { /* mulps xmm0, xmmword ptr [esp + 0x180] */ uint32_t A = sp1 - 0x120u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0x110], xmm0 */ uint32_t A = sp1 - 0x190u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344760] */ uint32_t A = COW_IMG(0x10344760u); g->xmm[0] = rd128(A); }
    { /* mulps xmm1, xmmword ptr [esp + 0x150] */ uint32_t A = sp1 - 0x150u; g->xmm[1] = sse_mulps(g->xmm[1], rd128(A)); }
    { /* mulps xmm0, xmmword ptr [esp + 0x1e0] */ uint32_t A = sp1 - 0xc0u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0xc0], xmm0 */ uint32_t A = sp1 - 0x1e0u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344750] */ uint32_t A = COW_IMG(0x10344750u); g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm5 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[5]); }
    { /* mulps xmm0, xmmword ptr [esp + 0x1a0] */ uint32_t A = sp1 - 0x100u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [esp + 0xe0], xmm0 */ uint32_t A = sp1 - 0x1c0u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344740] */ uint32_t A = COW_IMG(0x10344740u); g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm4 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[4]); }
    { /* mulps xmm0, xmmword ptr [esp + 0x220] */ uint32_t A = sp1 - 0x80u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* addps xmm6, xmm3 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[3]); }
    { /* movaps xmmword ptr [esp + 0x30], xmm0 */ uint32_t A = sp1 - 0x270u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x10344730] */ uint32_t A = COW_IMG(0x10344730u); g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0x140] */ uint32_t A = sp1 - 0x160u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* addps xmm6, xmm2 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[2]); }
    { /* addps xmm6, xmm1 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[1]); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x30] */ uint32_t A = sp1 - 0x270u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0xe0] */ uint32_t A = sp1 - 0x1c0u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0xc0] */ uint32_t A = sp1 - 0x1e0u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x110] */ uint32_t A = sp1 - 0x190u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0xf0] */ uint32_t A = sp1 - 0x1b0u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0xd0] */ uint32_t A = sp1 - 0x1d0u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0xa0] */ uint32_t A = sp1 - 0x200u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x220u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x60] */ uint32_t A = sp1 - 0x240u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x40] */ uint32_t A = sp1 - 0x260u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x20] */ uint32_t A = sp1 - 0x280u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x10] */ uint32_t A = sp1 - 0x290u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x90] */ uint32_t A = sp1 - 0x210u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [esp + 0xb0] */ uint32_t A = sp1 - 0x1f0u; g->xmm[1] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x100] */ uint32_t A = sp1 - 0x1a0u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x70] */ uint32_t A = sp1 - 0x230u; g->xmm[0] = rd128(A); }
    { /* addps xmm6, xmm0 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmm6 */ g->xmm[0] = g->xmm[6]; }
    { /* movaps xmm2, xmmword ptr [0x103cb6c0] */ uint32_t A = COW_IMG(0x103cb6c0u); g->xmm[2] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x50] */ uint32_t A = sp1 - 0x250u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x120] */ uint32_t A = sp1 - 0x180u; g->xmm[1] = rd128(A); }
    { /* movaps xmm3, xmm1 */ g->xmm[3] = g->xmm[1]; }
    { /* movaps xmm4, xmm1 */ g->xmm[4] = g->xmm[1]; }
    { /* shufps xmm3, xmm0, 0xff */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[0], 255); }
    { /* shufps xmm4, xmm0, 0xaa */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[0], 170); }
    { /* mulps xmm3, xmm2 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[2]); }
    { /* movaps xmm2, xmmword ptr [0x103cb6b0] */ uint32_t A = COW_IMG(0x103cb6b0u); g->xmm[2] = rd128(A); }
    { /* mulps xmm4, xmm2 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[2]); }
    { /* movaps xmm2, xmmword ptr [0x103cb6a0] */ uint32_t A = COW_IMG(0x103cb6a0u); g->xmm[2] = rd128(A); }
    { /* addps xmm4, xmm3 */ g->xmm[4] = sse_addps(g->xmm[4], g->xmm[3]); }
    { /* movaps xmm3, xmm1 */ g->xmm[3] = g->xmm[1]; }
    { /* shufps xmm3, xmm0, 0x55 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[0], 85); }
    { /* shufps xmm1, xmm0, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[0], 0); }
    { /* mulps xmm3, xmm2 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[2]); }
    { /* addps xmm1, xmm3 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[3]); }
    { /* addps xmm1, xmm4 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[4]); }
    { /* movups xmmword ptr [eax + 0xb8], xmm1 */ uint32_t A = eax + 0xb8u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x103446c0] */ uint32_t A = COW_IMG(0x103446c0u); g->xmm[1] = rd128(A); }
    { /* movaps xmm0, xmmword ptr [eax + 0xb8] */ uint32_t A = eax + 0xb8u; g->xmm[0] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [eax + 0xb0] */ uint32_t A = eax + 0xb0u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x50], xmm1 */ uint32_t A = sp1 - 0x250u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x103446b0] */ uint32_t A = COW_IMG(0x103446b0u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [eax + 0xa8] */ uint32_t A = eax + 0xa8u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xb0], xmm1 */ uint32_t A = sp1 - 0x1f0u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x103446a0] */ uint32_t A = COW_IMG(0x103446a0u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [esi] */ uint32_t A = eax + 0xa0u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x70], xmm1 */ uint32_t A = sp1 - 0x230u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x10344690] */ uint32_t A = COW_IMG(0x10344690u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [eax + 0x98] */ uint32_t A = eax + 0x98u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x100], xmm1 */ uint32_t A = sp1 - 0x1a0u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x10344680] */ uint32_t A = COW_IMG(0x10344680u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [eax + 0x90] */ uint32_t A = eax + 0x90u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x90], xmm1 */ uint32_t A = sp1 - 0x210u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x10344670] */ uint32_t A = COW_IMG(0x10344670u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [eax + 0x88] */ uint32_t A = eax + 0x88u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x10], xmm1 */ uint32_t A = sp1 - 0x290u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x10344660] */ uint32_t A = COW_IMG(0x10344660u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [esi] */ uint32_t A = eax + 0x80u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x20], xmm1 */ uint32_t A = sp1 - 0x280u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x10344650] */ uint32_t A = COW_IMG(0x10344650u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [eax + 0x78] */ uint32_t A = eax + 0x78u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x40], xmm1 */ uint32_t A = sp1 - 0x260u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x10344640] */ uint32_t A = COW_IMG(0x10344640u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [eax + 0x70] */ uint32_t A = eax + 0x70u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x60], xmm1 */ uint32_t A = sp1 - 0x240u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x10344630] */ uint32_t A = COW_IMG(0x10344630u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [eax + 0x68] */ uint32_t A = eax + 0x68u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x80], xmm1 */ uint32_t A = sp1 - 0x220u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x10344620] */ uint32_t A = COW_IMG(0x10344620u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0xa0], xmm1 */ uint32_t A = sp1 - 0x200u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x10344610] */ uint32_t A = COW_IMG(0x10344610u); g->xmm[1] = rd128(A); }
    { /* movups xmm0, xmmword ptr [esi] */ uint32_t A = eax + 0x60u; g->xmm[0] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [eax + 0x58] */ uint32_t A = eax + 0x58u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xd0], xmm1 */ uint32_t A = sp1 - 0x1d0u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x10344600] */ uint32_t A = COW_IMG(0x10344600u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [eax + 0x50] */ uint32_t A = eax + 0x50u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xf0], xmm1 */ uint32_t A = sp1 - 0x1b0u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x103445f0] */ uint32_t A = COW_IMG(0x103445f0u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [eax + 0x48] */ uint32_t A = eax + 0x48u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x110], xmm1 */ uint32_t A = sp1 - 0x190u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x103445e0] */ uint32_t A = COW_IMG(0x103445e0u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [esi] */ uint32_t A = eax + 0x40u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xc0], xmm1 */ uint32_t A = sp1 - 0x1e0u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x103445d0] */ uint32_t A = COW_IMG(0x103445d0u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [eax + 0x38] */ uint32_t A = eax + 0x38u; g->xmm[0] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [0x103445a0] */ uint32_t A = COW_IMG(0x103445a0u); g->xmm[2] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xe0], xmm1 */ uint32_t A = sp1 - 0x1c0u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x103445c0] */ uint32_t A = COW_IMG(0x103445c0u); g->xmm[1] = rd128(A); }
    { /* movaps xmm3, xmmword ptr [0x10344590] */ uint32_t A = COW_IMG(0x10344590u); g->xmm[3] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [eax + 0x30] */ uint32_t A = eax + 0x30u; g->xmm[0] = rd128(A); }
    { /* movaps xmm4, xmmword ptr [0x10344580] */ uint32_t A = COW_IMG(0x10344580u); g->xmm[4] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x30], xmm1 */ uint32_t A = sp1 - 0x270u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x103445b0] */ uint32_t A = COW_IMG(0x103445b0u); g->xmm[1] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [0x10344570] */ uint32_t A = COW_IMG(0x10344570u); g->xmm[5] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [eax + 0x28] */ uint32_t A = eax + 0x28u; g->xmm[0] = rd128(A); }
    { /* movaps xmm6, xmmword ptr [0x10344560] */ uint32_t A = COW_IMG(0x10344560u); g->xmm[6] = rd128(A); }
    { /* mulps xmm2, xmm0 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [esi] */ uint32_t A = eax + 0x20u; g->xmm[0] = rd128(A); }
    { /* movaps xmm7, xmmword ptr [0x10344550] */ uint32_t A = COW_IMG(0x10344550u); g->xmm[7] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [eax + 0x18] */ uint32_t A = eax + 0x18u; g->xmm[0] = rd128(A); }
    { /* mulps xmm4, xmm0 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [ecx] */ uint32_t A = eax + 0x10u; g->xmm[0] = rd128(A); }
    { /* mulps xmm5, xmm0 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [eax + 8] */ uint32_t A = eax + 8u; g->xmm[0] = rd128(A); }
    { /* mulps xmm6, xmm0 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [eax] */ uint32_t A = eax; g->xmm[0] = rd128(A); }
    { /* mulps xmm7, xmm0 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x30] */ uint32_t A = sp1 - 0x270u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm6 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[6]); }
    { /* addps xmm7, xmm5 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[5]); }
    { /* addps xmm7, xmm4 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[4]); }
    { /* addps xmm7, xmm3 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[3]); }
    { /* addps xmm7, xmm2 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[2]); }
    { /* addps xmm7, xmm1 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[1]); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0xe0] */ uint32_t A = sp1 - 0x1c0u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0xc0] */ uint32_t A = sp1 - 0x1e0u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x110] */ uint32_t A = sp1 - 0x190u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0xf0] */ uint32_t A = sp1 - 0x1b0u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0xd0] */ uint32_t A = sp1 - 0x1d0u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0xa0] */ uint32_t A = sp1 - 0x200u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x220u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x60] */ uint32_t A = sp1 - 0x240u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x40] */ uint32_t A = sp1 - 0x260u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x20] */ uint32_t A = sp1 - 0x280u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x10] */ uint32_t A = sp1 - 0x290u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x90] */ uint32_t A = sp1 - 0x210u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x100] */ uint32_t A = sp1 - 0x1a0u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x70] */ uint32_t A = sp1 - 0x230u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0xb0] */ uint32_t A = sp1 - 0x1f0u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x50] */ uint32_t A = sp1 - 0x250u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movups xmmword ptr [eax], xmm7 */ uint32_t A = eax; wr128(A, g->xmm[7]); }
    if (eax + 0x10u < arg1 + 0x1000u)
    {
        eax = eax + 0x10u;
        goto L_102ce0a6;
    }
    eax = eax + 0x10u;
    g->edx = arg1 + 0x1000u;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ce090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ce090(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
