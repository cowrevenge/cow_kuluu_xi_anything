/* f_0x102fc30b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102fc30b(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102fc37au: eax = g->eax; in_ebx = g->ebx; in_esi = g->esi; goto E_102fc37a;
    case 0x102fc3f6u: eax = g->eax; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102fc3f6;
    default: break;
    }
#endif

    COW_AT(102fc30b)
    { /* femms  */  }
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    { /* movd mm0, dword ptr [0x10348508] */ uint32_t A = COW_IMG(0x10348508u); g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm1, qword ptr [ecx] */ uint32_t A = arg2; g->mm[1] = rd64(A); }
    { /* pfmul mm1, qword ptr [edx] */ uint32_t A = arg3; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* movq mm2, qword ptr [ecx + 8] */ uint32_t A = arg2 + 8u; g->mm[2] = rd64(A); }
    { /* pfmul mm2, qword ptr [edx + 8] */ uint32_t A = arg3 + 8u; g->mm[2] = n3d_pfmul(g->mm[2], rd64(A)); }
    { /* pfadd mm1, mm2 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[2]); }
    { /* pxor mm7, mm7 */ g->mm[7] = mmx_pxor(g->mm[7], g->mm[7]); }
    { /* movd mm4, dword ptr [esp + 0x28] */ uint32_t A = sp0 + 0x10u; g->mm[4] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfsub mm0, mm4 */ g->mm[0] = n3d_pfsub(g->mm[0], g->mm[4]); }
    { /* pfacc mm1, mm1 */ g->mm[1] = n3d_pfacc(g->mm[1], g->mm[1]); }
    { /* pfcmpge mm7, mm1 */ g->mm[7] = n3d_pfcmpge(g->mm[7], g->mm[1]); }
    { /* movq mm6, qword ptr [0x10348568] */ uint32_t A = COW_IMG(0x10348568u); g->mm[6] = rd64(A); }
    { /* pand mm7, qword ptr [0x10348550] */ uint32_t A = COW_IMG(0x10348550u); g->mm[7] = mmx_pand(g->mm[7], rd64(A)); }
    { /* pxor mm1, mm7 */ g->mm[1] = mmx_pxor(g->mm[1], g->mm[7]); }
    { /* pfcmpge mm6, mm1 */ g->mm[6] = n3d_pfcmpge(g->mm[6], g->mm[1]); }
    eax = in_eax;
    { /* movd eax, mm6 */ eax = (uint32_t)((uint32_t)g->mm[6]); }
    { /* movq mm3, mm1 */ g->mm[3] = g->mm[1]; }
    { /* pfmul mm3, mm3 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[3]); }
    { /* pfsubr mm3, qword ptr [0x10348508] */ uint32_t A = COW_IMG(0x10348508u); g->mm[3] = n3d_pfsubr(g->mm[3], rd64(A)); }
    if (eax != 0u)
    {
    COW_AT(102fc37a)
        { /* pfrsqrt mm4, mm3 */ g->mm[4] = n3d_pfrsqrt(g->mm[4], g->mm[3]); }
        { /* movq mm2, mm4 */ g->mm[2] = g->mm[4]; }
        { /* movd dword ptr [esp + 0xc], mm7 */ uint32_t A = sp0 - 0xcu; wr32(A, (uint32_t)((uint32_t)g->mm[7])); }
        { /* pfmul mm2, mm4 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[4]); }
        { /* pfrsqit1 mm3, mm2 */ g->mm[3] = n3d_pfrsqit1(g->mm[3], g->mm[2]); }
        { /* pfrcpit2 mm3, mm4 */ g->mm[3] = n3d_pfrcpit2(g->mm[3], g->mm[4]); }
        { /* pfrcp mm2, mm3 */ g->mm[2] = n3d_pfrcp(g->mm[2], g->mm[3]); }
        { /* movq mm4, mm3 */ g->mm[4] = g->mm[3]; }
        { /* pfrcpit1 mm4, mm2 */ g->mm[4] = n3d_pfrcpit1(g->mm[4], g->mm[2]); }
        { /* pfrcpit2 mm4, mm2 */ g->mm[4] = n3d_pfrcpit2(g->mm[4], g->mm[2]); }
        { /* movd dword ptr [esp], mm0 */ uint32_t A = sp0 - 0x18u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
        { /* movd dword ptr [esp + 4], mm3 */ uint32_t A = sp0 - 0x14u; wr32(A, (uint32_t)((uint32_t)g->mm[3])); }
        { /* movq mm0, mm1 */ g->mm[0] = g->mm[1]; }
        { /* movq mm1, mm4 */ g->mm[1] = g->mm[4]; }
        g->eax = eax;
        g->ecx = arg2;
        g->edx = arg3;
        g->esp = sp0 - 0x18u;
        t1 = cow_stdcall(g, COW_IMG(0x10309f00u), 0);
        t2 = g->ecx;
        t3 = g->edx;
        { /* movd mm1, dword ptr [esp + 0x28] */ uint32_t A = sp0 + 0x10u; g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
        { /* movd dword ptr [esp + 8], mm0 */ uint32_t A = sp0 - 0x10u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
        { /* pfmul mm0, mm1 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[1]); }
        g->ecx = t2;
        g->edx = t3;
        t4 = cow_stdcall(g, COW_IMG(0x1030a700u), 0);
        t5 = g->ecx;
        t6 = g->edx;
        t7 = g->ebx;
        t8 = g->esi;
        { /* movd dword ptr [esp + 0x28], mm0 */ uint32_t A = sp0 + 0x10u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
        { /* movd mm1, dword ptr [esp] */ uint32_t A = sp0 - 0x18u; g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
        { /* movd mm0, dword ptr [esp + 8] */ uint32_t A = sp0 - 0x10u; g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
        { /* pfmul mm0, mm1 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[1]); }
        g->ebx = t7;
        g->esi = t8;
        cow_stdcall(g, COW_IMG(0x1030a700u), 0);
        { /* movd mm4, dword ptr [esp + 0x28] */ uint32_t A = sp0 + 0x10u; g->mm[4] = (uint64_t)(uint32_t)rd32(A); }
        { /* movd mm1, dword ptr [esp + 4] */ uint32_t A = sp0 - 0x14u; g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
        { /* movd mm7, dword ptr [esp + 0xc] */ uint32_t A = sp0 - 0xcu; g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
        { /* pfmul mm0, mm1 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[1]); }
        { /* pfmul mm4, mm1 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[1]); }
    }
    COW_AT(102fc3f6)
    { /* pxor mm4, mm7 */ g->mm[4] = mmx_pxor(g->mm[4], g->mm[7]); }
    { /* punpckldq mm0, mm0 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[0]); }
    { /* punpckldq mm4, mm4 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[4]); }
    { /* movq mm5, mm0 */ g->mm[5] = g->mm[0]; }
    { /* movq mm6, mm4 */ g->mm[6] = g->mm[4]; }
    { /* pfmul mm0, qword ptr [ecx] */ uint32_t A = arg2; g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* pfmul mm4, qword ptr [edx] */ uint32_t A = arg3; g->mm[4] = n3d_pfmul(g->mm[4], rd64(A)); }
    { /* pfmul mm5, qword ptr [ecx + 8] */ uint32_t A = arg2 + 8u; g->mm[5] = n3d_pfmul(g->mm[5], rd64(A)); }
    { /* pfmul mm6, qword ptr [edx + 8] */ uint32_t A = arg3 + 8u; g->mm[6] = n3d_pfmul(g->mm[6], rd64(A)); }
    { /* pfadd mm0, mm4 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[4]); }
    { /* pfadd mm5, mm6 */ g->mm[5] = n3d_pfadd(g->mm[5], g->mm[6]); }
    { /* movq qword ptr [eax], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 8], mm5 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[5]); }
    { /* femms  */  }
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102fc30b(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102fc37au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        in_ebx = g->ebx;
        in_esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->ecx = arg2;
        g->edx = arg3;
        wr32(sp0 - 8u, in_esi);
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102fc3f6u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102fc30b(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102fc30b(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
