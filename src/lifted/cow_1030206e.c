/* f_0x1030206e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_1030206e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 4u);

    { /* movd mm0, dword ptr [esp + 0x18] */ uint32_t A = sp0 + 0x18u; g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* punpckldq mm0, mm0 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[0]); }
    { /* pfmul mm0, mm0 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[0]); }
    { /* punpckldq mm1, dword ptr [0x10348480] */ uint32_t A = COW_IMG(0x10348480u); g->mm[1] = mmx_punpckldq(g->mm[1], (uint64_t)rd32(A)); }
    { /* pfmul mm0, mm1 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[1]); }
    { /* movq mm3, mm1 */ g->mm[3] = g->mm[1]; }
    { /* pfmul mm1, mm1 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[1]); }
    { /* pxor mm7, mm7 */ g->mm[7] = mmx_pxor(g->mm[7], g->mm[7]); }
    { /* pfsub mm0, mm1 */ g->mm[0] = n3d_pfsub(g->mm[0], g->mm[1]); }
    { /* punpckldq mm1, mm1 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[1]); }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
    { /* pfmul mm0, qword ptr [0x10348490] */ uint32_t A = COW_IMG(0x10348490u); g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* movq mm5, mm0 */ g->mm[5] = g->mm[0]; }
    { /* punpckldq mm0, mm4 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[4]); }
    { /* pxor mm3, qword ptr [0x103484a0] */ uint32_t A = COW_IMG(0x103484a0u); g->mm[3] = mmx_pxor(g->mm[3], rd64(A)); }
    { /* punpckhdq mm5, mm7 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[7]); }
    { /* pfadd mm1, mm3 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[3]); }
    { /* pfsub mm1, mm0 */ g->mm[1] = n3d_pfsub(g->mm[1], g->mm[0]); }
    { /* pfsub mm0, mm5 */ g->mm[0] = n3d_pfsub(g->mm[0], g->mm[5]); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* punpckhdq mm1, mm1 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[1]); }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* punpckldq mm0, mm0 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[0]); }
    { /* punpckldq mm2, mm2 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[2]); }
    { /* pfmul mm1, qword ptr [edx] */ uint32_t A = arg2; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* punpckhdq mm3, mm3 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[3]); }
    { /* pfmul mm0, qword ptr [ecx] */ uint32_t A = arg3; g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* pfmul mm2, qword ptr [eax] */ uint32_t A = arg4; g->mm[2] = n3d_pfmul(g->mm[2], rd64(A)); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfadd mm4, mm5 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[5]); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfmul mm3, qword ptr [edx] */ uint32_t A = arg5; g->mm[3] = n3d_pfmul(g->mm[3], rd64(A)); }
    { /* pfadd mm0, mm3 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[3]); }
    { /* pfmul mm0, qword ptr [0x103484e8] */ uint32_t A = COW_IMG(0x103484e8u); g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* movq qword ptr [eax], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
    { /* femms  */  }
    g->edx = arg5;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030206e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030206e(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
