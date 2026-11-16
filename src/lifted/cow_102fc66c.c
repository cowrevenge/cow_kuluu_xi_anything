/* f_0x102fc66c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102fc66c(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 16u);

    { /* movq mm0, qword ptr [edx] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
    { /* movd mm1, dword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfmul mm0, mm0 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[0]); }
    { /* pfmul mm1, mm1 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[1]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm0 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[0]); }
    { /* pfrsqrt mm1, mm0 */ g->mm[1] = n3d_pfrsqrt(g->mm[1], g->mm[0]); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* pfmul mm1, mm1 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[1]); }
    wr32(sp0 - 8u, in_esi);
    { /* pfrsqit1 mm1, mm0 */ g->mm[1] = n3d_pfrsqit1(g->mm[1], g->mm[0]); }
    wr32(sp0 - 4u, in_ebx);
    { /* pfrcpit2 mm1, mm2 */ g->mm[1] = n3d_pfrcpit2(g->mm[1], g->mm[2]); }
    { /* movd dword ptr [esp], mm1 */ uint32_t A = sp0 - 0xcu; wr32(A, (uint32_t)((uint32_t)g->mm[1])); }
    { /* pfmul mm0, mm1 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[1]); }
    g->ecx = self;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x1030a5e0u), 0);
    t1 = g->ecx;
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* pand mm0, qword ptr [0x103484b8] */ uint32_t A = COW_IMG(0x103484b8u); g->mm[0] = mmx_pand(g->mm[0], rd64(A)); }
    { /* pfcmpge mm0, qword ptr [0x103484c8] */ uint32_t A = COW_IMG(0x103484c8u); g->mm[0] = n3d_pfcmpge(g->mm[0], rd64(A)); }
    { /* punpckhdq mm0, mm0 */ g->mm[0] = mmx_punpckhdq(g->mm[0], g->mm[0]); }
    ecx = t1;
    { /* movd ecx, mm0 */ ecx = (uint32_t)((uint32_t)g->mm[0]); }
    { /* movq mm2, qword ptr [edx] */ uint32_t A = arg2; g->mm[2] = rd64(A); }
    { /* movq mm0, mm1 */ g->mm[0] = g->mm[1]; }
    { /* punpckhdq mm1, mm1 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[1]); }
    { /* pfmul mm1, qword ptr [esp] */ uint32_t A = sp0 - 0xcu; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* movd mm3, dword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    if (ecx & 1u)
    {
        { /* punpckldq mm1, mm1 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[1]); }
        { /* pfmul mm3, mm1 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[1]); }
        { /* pfmul mm2, mm1 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[1]); }
    }
    { /* punpckldq mm3, mm0 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [eax], mm2 */ uint32_t A = arg1; wr64(A, g->mm[2]); }
    { /* movq qword ptr [eax + 8], mm3 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[3]); }
    { /* femms  */  }
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = arg2;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fc66c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fc66c(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
