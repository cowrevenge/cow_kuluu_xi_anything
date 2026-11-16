/* f_0x102fd7e5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102fd7e5(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    { /* femms  */  }
    { /* movd mm0, dword ptr [esp + 0x10] */ uint32_t A = sp0 + 8u; g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x1030a5e0u), 0);
    t1 = g->edx;
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* punpckhdq mm4, mm4 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[4]); }
    { /* pxor mm1, mm1 */ g->mm[1] = mmx_pxor(g->mm[1], g->mm[1]); }
    { /* movq mm2, qword ptr [0x10348548] */ uint32_t A = COW_IMG(0x10348548u); g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [0x10348540] */ uint32_t A = COW_IMG(0x10348540u); g->mm[3] = rd64(A); }
    { /* punpckldq mm4, mm0 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[0]); }
    { /* pxor mm4, qword ptr [0x103484f8] */ uint32_t A = COW_IMG(0x103484f8u); g->mm[4] = mmx_pxor(g->mm[4], rd64(A)); }
    { /* movq qword ptr [eax], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 8], mm1 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [eax + 0x18], mm1 */ uint32_t A = arg1 + 0x18u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [eax + 0x20], mm1 */ uint32_t A = arg1 + 0x20u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [eax + 0x28], mm2 */ uint32_t A = arg1 + 0x28u; wr64(A, g->mm[2]); }
    { /* movq qword ptr [eax + 0x30], mm1 */ uint32_t A = arg1 + 0x30u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [eax + 0x38], mm3 */ uint32_t A = arg1 + 0x38u; wr64(A, g->mm[3]); }
    { /* movq qword ptr [eax + 0x10], mm4 */ uint32_t A = arg1 + 0x10u; wr64(A, g->mm[4]); }
    { /* femms  */  }
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t1;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fd7e5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fd7e5(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
