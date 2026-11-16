/* f_0x10302543 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10302543(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* femms  */  }
    { /* movq mm0, qword ptr [edx] */ uint32_t A = arg3; g->mm[0] = rd64(A); }
    { /* movd mm1, dword ptr [edx + 8] */ uint32_t A = arg3 + 8u; g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm2, qword ptr [ecx] */ uint32_t A = arg2; g->mm[2] = rd64(A); }
    { /* movd mm3, dword ptr [ecx + 8] */ uint32_t A = arg2 + 8u; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfmul mm2, mm0 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[0]); }
    { /* pfmul mm3, mm1 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[1]); }
    { /* pfacc mm2, mm2 */ g->mm[2] = n3d_pfacc(g->mm[2], g->mm[2]); }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* movq qword ptr [eax], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
    { /* pxor mm2, qword ptr [0x103484f8] */ uint32_t A = COW_IMG(0x103484f8u); g->mm[2] = mmx_pxor(g->mm[2], rd64(A)); }
    { /* movd dword ptr [eax + 8], mm1 */ uint32_t A = arg1 + 8u; wr32(A, (uint32_t)((uint32_t)g->mm[1])); }
    { /* movd dword ptr [eax + 0xc], mm2 */ uint32_t A = arg1 + 0xcu; wr32(A, (uint32_t)((uint32_t)g->mm[2])); }
    { /* femms  */  }
    g->edx = arg3;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10302543(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10302543(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
