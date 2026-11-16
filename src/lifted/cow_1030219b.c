/* f_0x1030219b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1030219b(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    { /* femms  */  }
    { /* movq mm0, qword ptr [ecx] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* movq mm2, qword ptr [ecx + 8] */ uint32_t A = arg2 + 8u; g->mm[2] = rd64(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* pfmul mm0, mm0 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[0]); }
    { /* pfmul mm2, mm2 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[2]); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfacc mm0, mm0 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[0]); }
    { /* movq mm5, mm0 */ g->mm[5] = g->mm[0]; }
    { /* pfrsqrt mm4, mm0 */ g->mm[4] = n3d_pfrsqrt(g->mm[4], g->mm[0]); }
    { /* pfcmpgt mm5, qword ptr [0x103484f0] */ uint32_t A = COW_IMG(0x103484f0u); g->mm[5] = n3d_pfcmpgt(g->mm[5], rd64(A)); }
    { /* movq mm2, mm4 */ g->mm[2] = g->mm[4]; }
    { /* pfmul mm2, mm4 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[4]); }
    { /* pfrsqit1 mm0, mm2 */ g->mm[0] = n3d_pfrsqit1(g->mm[0], g->mm[2]); }
    { /* pand mm1, mm5 */ g->mm[1] = mmx_pand(g->mm[1], g->mm[5]); }
    { /* pand mm3, mm5 */ g->mm[3] = mmx_pand(g->mm[3], g->mm[5]); }
    { /* pfrcpit2 mm0, mm4 */ g->mm[0] = n3d_pfrcpit2(g->mm[0], g->mm[4]); }
    { /* pfmul mm1, mm0 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[0]); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [eax], mm1 */ uint32_t A = arg1; wr64(A, g->mm[1]); }
    { /* movq qword ptr [eax + 8], mm3 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[3]); }
    { /* femms  */  }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030219b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030219b(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
