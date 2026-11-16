/* f_0x102fbcf6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102fbcf6(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* movq mm7, qword ptr [0x103484f0] */ uint32_t A = COW_IMG(0x103484f0u); g->mm[7] = rd64(A); }
    { /* movq mm5, qword ptr [ecx] */ uint32_t A = arg1; g->mm[5] = rd64(A); }
    { /* movq mm1, qword ptr [ecx + 8] */ uint32_t A = arg1 + 8u; g->mm[1] = rd64(A); }
    { /* movq mm2, mm5 */ g->mm[2] = g->mm[5]; }
    { /* pfmul mm5, mm5 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[5]); }
    { /* movq mm0, mm1 */ g->mm[0] = g->mm[1]; }
    { /* pfmul mm1, mm1 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[1]); }
    { /* pfadd mm5, mm1 */ g->mm[5] = n3d_pfadd(g->mm[5], g->mm[1]); }
    { /* pfacc mm5, mm5 */ g->mm[5] = n3d_pfacc(g->mm[5], g->mm[5]); }
    { /* pfcmpge mm7, mm5 */ g->mm[7] = n3d_pfcmpge(g->mm[7], g->mm[5]); }
    { /* pfrsqrt mm1, mm5 */ g->mm[1] = n3d_pfrsqrt(g->mm[1], g->mm[5]); }
    eax = in_eax;
    { /* movd eax, mm7 */ eax = (uint32_t)((uint32_t)g->mm[7]); }
    { /* movq mm4, mm1 */ g->mm[4] = g->mm[1]; }
    if (eax != 0u)
    {
        { /* pxor mm1, mm1 */ g->mm[1] = mmx_pxor(g->mm[1], g->mm[1]); }
        if (arg2 != 0u)
        {
            { /* movq mm0, qword ptr [0x10348470] */ uint32_t A = COW_IMG(0x10348470u); g->mm[0] = rd64(A); }
            { /* movq qword ptr [edx + 4], mm1 */ uint32_t A = arg2 + 4u; wr64(A, g->mm[1]); }
            { /* movd dword ptr [edx], mm0 */ uint32_t A = arg2; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
        }
        if (arg3 == 0u)
        {
            edx = arg2;
        }
        else
        {
            { /* movd dword ptr [ecx], mm1 */ uint32_t A = arg3; wr32(A, (uint32_t)((uint32_t)g->mm[1])); }
            edx = arg2;
        }
    }
    else
    {
        { /* pfmul mm1, mm1 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[1]); }
        if (arg2 != 0u)
        {
            { /* pfrsqit1 mm1, mm5 */ g->mm[1] = n3d_pfrsqit1(g->mm[1], g->mm[5]); }
            { /* pfrcpit2 mm1, mm4 */ g->mm[1] = n3d_pfrcpit2(g->mm[1], g->mm[4]); }
            { /* pfmul mm2, mm1 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[1]); }
            { /* pfmul mm1, mm0 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[0]); }
            { /* movq qword ptr [edx], mm2 */ uint32_t A = arg2; wr64(A, g->mm[2]); }
            { /* movd dword ptr [edx + 8], mm1 */ uint32_t A = arg2 + 8u; wr32(A, (uint32_t)((uint32_t)g->mm[1])); }
        }
        if (arg3 == 0u)
        {
            edx = arg2;
        }
        else
        {
            { /* punpckhdq mm0, mm0 */ g->mm[0] = mmx_punpckhdq(g->mm[0], g->mm[0]); }
            g->eax = eax;
            g->edx = arg2;
            g->esp = sp0 - 8u;
            t1 = cow_stdcall(g, COW_IMG(0x1030a000u), 0);
            t2 = g->edx;
            { /* pfmul mm0, qword ptr [0x10348488] */ uint32_t A = COW_IMG(0x10348488u); g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
            { /* movd dword ptr [ecx], mm0 */ uint32_t A = arg3; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
            eax = t1;
            edx = t2;
        }
    }
    { /* femms  */  }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fbcf6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fbcf6(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
