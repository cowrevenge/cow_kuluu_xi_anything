/* f_0x102fc5c5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102fc5c5(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 16u);

    { /* femms  */  }
    { /* movq mm1, qword ptr [edx] */ uint32_t A = arg2; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->mm[2] = rd64(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* punpckhdq mm3, mm3 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[3]); }
    { /* movq mm0, mm3 */ g->mm[0] = g->mm[3]; }
    { /* pfcmpge mm3, qword ptr [0x10348508] */ uint32_t A = COW_IMG(0x10348508u); g->mm[3] = n3d_pfcmpge(g->mm[3], rd64(A)); }
    ecx = self;
    { /* movd ecx, mm3 */ ecx = (uint32_t)((uint32_t)g->mm[3]); }
    if (ecx == 0u)
    {
        g->eax = arg1;
        g->ecx = ecx;
        g->edx = arg2;
        g->esp = sp0 - 0xcu;
        t1 = cow_stdcall(g, COW_IMG(0x1030a000u), 0);
        t2 = g->ecx;
        t3 = g->edx;
        { /* movd dword ptr [esp], mm0 */ uint32_t A = sp0 - 0xcu; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
        wr32(sp0 - 8u, in_esi);
        wr32(sp0 - 4u, in_ebx);
        g->ecx = t2;
        cow_stdcall(g, COW_IMG(0x1030a700u), 0);
        t4 = g->ecx;
        { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
        { /* pand mm3, qword ptr [0x103484c0] */ uint32_t A = COW_IMG(0x103484c0u); g->mm[3] = mmx_pand(g->mm[3], rd64(A)); }
        { /* pfcmpge mm3, qword ptr [0x103484c8] */ uint32_t A = COW_IMG(0x103484c8u); g->mm[3] = n3d_pfcmpge(g->mm[3], rd64(A)); }
        ecx = t4;
        { /* movd ecx, mm3 */ ecx = (uint32_t)((uint32_t)g->mm[3]); }
        { /* movq mm1, qword ptr [edx] */ uint32_t A = arg2; g->mm[1] = rd64(A); }
        { /* movq mm2, qword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->mm[2] = rd64(A); }
        if (ecx != 0u)
        {
            { /* movd mm3, dword ptr [esp] */ uint32_t A = sp0 - 0xcu; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
            { /* pfrcp mm4, mm0 */ g->mm[4] = n3d_pfrcp(g->mm[4], g->mm[0]); }
            { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
            { /* pfrcpit1 mm0, mm4 */ g->mm[0] = n3d_pfrcpit1(g->mm[0], g->mm[4]); }
            { /* pfrcpit2 mm0, mm4 */ g->mm[0] = n3d_pfrcpit2(g->mm[0], g->mm[4]); }
            { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
            { /* pfmul mm1, mm3 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[3]); }
            { /* pfmul mm2, mm3 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[3]); }
        }
    }
    { /* pand mm2, qword ptr [0x103484d0] */ uint32_t A = COW_IMG(0x103484d0u); g->mm[2] = mmx_pand(g->mm[2], rd64(A)); }
    { /* movq qword ptr [eax], mm1 */ uint32_t A = arg1; wr64(A, g->mm[1]); }
    { /* movq qword ptr [eax + 8], mm2 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[2]); }
    { /* femms  */  }
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = arg2;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fc5c5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fc5c5(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
