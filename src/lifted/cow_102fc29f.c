/* f_0x102fc29f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102fc29f(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x18u) & 0xfffffff8u;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 4u, in_ebp);
    { /* femms  */  }
    wr32(sp1 - 4u, arg2);
    wr32(sp1 - 8u, sp1);
    g->ecx = self;
    g->edx = sp1;
    g->esp = sp1;
    t1 = cow_stdcall(g, COW_IMG(0x10301472u), 2, sp1, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    { /* movd mm0, dword ptr [ebp + 0x24] */ uint32_t A = sp0 + 0xcu; g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfmul mm0, qword ptr [0x10348510] */ uint32_t A = COW_IMG(0x10348510u); g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    g->edx = t3;
    cow_stdcall(g, COW_IMG(0x1030a5e0u), 0);
    t4 = g->edx;
    { /* movq mm1, qword ptr [esp] */ uint32_t A = sp1; g->mm[1] = rd64(A); }
    { /* movd mm2, dword ptr [esp + 8] */ uint32_t A = sp1 + 8u; g->mm[2] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* punpckhdq mm3, mm3 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[3]); }
    { /* pfmul mm1, mm3 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[3]); }
    { /* pfmul mm2, mm3 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[3]); }
    { /* punpckldq mm2, mm0 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[0]); }
    { /* movq qword ptr [eax], mm1 */ uint32_t A = arg1; wr64(A, g->mm[1]); }
    { /* movq qword ptr [eax + 8], mm2 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[2]); }
    { /* femms  */  }
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t4;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fc29f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fc29f(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
