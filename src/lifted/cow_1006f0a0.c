/* f_0x1006f0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1006f0a0(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006f0bdu: ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1006f0bd;
    case 0x1006f0d0u: ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1006f0d0;
    case 0x1006f0d4u: ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1006f0d4;
    default: break;
    }
#endif

    COW_AT(1006f0a0)
    if (arg1 != rd32(sp0 + 0xcu))
    {
        esi = rd32(sp0 + 0xcu);
    COW_AT(1006f0d0)
        wr32(sp0 + 0xcu, esi);
    }
    else
    {
        esi = rd32(sp0 + 0xcu);
    COW_AT(1006f0bd)
        wr32(sp0 + 0xcu, self + 0xae0u);
        edi = self + 0xae0u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    COW_AT(1006f0d4)
    g->eax = self + 0xaa0u;
    g->edx = rd32(self);
    t1 = rd32(self);
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, rd32(t1 + 0xbcu), self, 2, self + 0xaa0u, arg2);
    t3 = g->edx;
    t4 = rd32(sp0 + 0xcu);
    { /* movaps xmm4, xmmword ptr [ecx] */ uint32_t A = self + 0xaa0u; g->xmm[4] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [ecx + 0x10] */ uint32_t A = self + 0xab0u; g->xmm[5] = rd128(A); }
    { /* movaps xmm6, xmmword ptr [ecx + 0x20] */ uint32_t A = self + 0xac0u; g->xmm[6] = rd128(A); }
    { /* movaps xmm7, xmmword ptr [ecx + 0x30] */ uint32_t A = self + 0xad0u; g->xmm[7] = rd128(A); }
    { /* movss xmm0, dword ptr [esi] */ uint32_t A = t4; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm1, dword ptr [esi + 0x10] */ uint32_t A = t4 + 0x10u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm2, dword ptr [esi + 0x20] */ uint32_t A = t4 + 0x20u; g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm3, dword ptr [esi + 0x30] */ uint32_t A = t4 + 0x30u; g->xmm[3] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm0, xmm4 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[4]); }
    { /* mulps xmm1, xmm5 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[5]); }
    { /* mulps xmm2, xmm6 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[6]); }
    { /* mulps xmm3, xmm7 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[7]); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm0, xmm3 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[3]); }
    { /* movaps xmmword ptr [edi], xmm0 */ uint32_t A = arg1; wr128(A, g->xmm[0]); }
    { /* movss xmm0, dword ptr [esi + 4] */ uint32_t A = t4 + 4u; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm1, dword ptr [esi + 0x14] */ uint32_t A = t4 + 0x14u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm2, dword ptr [esi + 0x24] */ uint32_t A = t4 + 0x24u; g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm3, dword ptr [esi + 0x34] */ uint32_t A = t4 + 0x34u; g->xmm[3] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm0, xmm4 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[4]); }
    { /* mulps xmm1, xmm5 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[5]); }
    { /* mulps xmm2, xmm6 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[6]); }
    { /* mulps xmm3, xmm7 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[7]); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm0, xmm3 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[3]); }
    { /* movaps xmmword ptr [edi + 0x10], xmm0 */ uint32_t A = arg1 + 0x10u; wr128(A, g->xmm[0]); }
    { /* movss xmm0, dword ptr [esi + 8] */ uint32_t A = t4 + 8u; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm1, dword ptr [esi + 0x18] */ uint32_t A = t4 + 0x18u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm2, dword ptr [esi + 0x28] */ uint32_t A = t4 + 0x28u; g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm3, dword ptr [esi + 0x38] */ uint32_t A = t4 + 0x38u; g->xmm[3] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm0, xmm4 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[4]); }
    { /* mulps xmm1, xmm5 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[5]); }
    { /* mulps xmm2, xmm6 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[6]); }
    { /* mulps xmm3, xmm7 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[7]); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm0, xmm3 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[3]); }
    { /* movaps xmmword ptr [edi + 0x20], xmm0 */ uint32_t A = arg1 + 0x20u; wr128(A, g->xmm[0]); }
    { /* movss xmm0, dword ptr [esi + 0xc] */ uint32_t A = t4 + 0xcu; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm1, dword ptr [esi + 0x1c] */ uint32_t A = t4 + 0x1cu; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm2, dword ptr [esi + 0x2c] */ uint32_t A = t4 + 0x2cu; g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm3, dword ptr [esi + 0x3c] */ uint32_t A = t4 + 0x3cu; g->xmm[3] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm0, xmm4 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[4]); }
    { /* mulps xmm1, xmm5 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[5]); }
    { /* mulps xmm2, xmm6 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[6]); }
    { /* mulps xmm3, xmm7 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[7]); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm0, xmm3 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[3]); }
    { /* movaps xmmword ptr [edi + 0x30], xmm0 */ uint32_t A = arg1 + 0x30u; wr128(A, g->xmm[0]); }
    g->edx = t3;
    cow_stdcall(g, COW_IMG(0x1006d3e0u), 1, arg1);
    t5 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t5;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1006f0a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006f0bdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->eax = self + 0xaa0u;
        g->ebp = arg1;
        wr32(sp0 - 4u, self + 0xaa0u);
        (void)sp0;
        return 1;
    }
    case 0x1006f0d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->eax = self + 0xaa0u;
        g->ebp = arg1;
        wr32(sp0 - 4u, self + 0xaa0u);
        (void)sp0;
        return 1;
    }
    case 0x1006f0d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->eax = self + 0xaa0u;
        g->ebp = arg1;
        wr32(sp0 - 4u, self + 0xaa0u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1006f0a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1006f0a0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
