/* f_0x10305eef - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_10305eef(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    eax = arg2;
    ecx = arg4;
    edx = arg6;
    ebx = arg3;
    esi = arg5;
    edi = arg1 >> 2u;
L_10305f0c: ;
    { /* movd mm0, dword ptr [eax] */ uint32_t A = eax; g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
    { /* pxor mm7, mm7 */ g->mm[7] = mmx_pxor(g->mm[7], g->mm[7]); }
    { /* movd mm2, dword ptr [ebx] */ uint32_t A = ebx; g->mm[2] = (uint64_t)(uint32_t)rd32(A); }
    { /* punpcklbw mm0, mm7 */ g->mm[0] = mmx_punpcklbw(g->mm[0], g->mm[7]); }
    { /* movd mm3, dword ptr [ecx] */ uint32_t A = ecx; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    { /* punpcklbw mm2, mm7 */ g->mm[2] = mmx_punpcklbw(g->mm[2], g->mm[7]); }
    { /* psubsw mm2, qword ptr [0x103ce7a0] */ uint32_t A = COW_IMG(0x103ce7a0u); g->mm[2] = mmx_psubsw(g->mm[2], rd64(A)); }
    { /* punpcklbw mm3, mm7 */ g->mm[3] = mmx_punpcklbw(g->mm[3], g->mm[7]); }
    { /* psubsw mm3, qword ptr [0x103ce7a0] */ uint32_t A = COW_IMG(0x103ce7a0u); g->mm[3] = mmx_psubsw(g->mm[3], rd64(A)); }
    { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
    { /* punpcklwd mm2, mm3 */ g->mm[2] = mmx_punpcklwd(g->mm[2], g->mm[3]); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* pmaddwd mm2, qword ptr [0x103ce7a8] */ uint32_t A = COW_IMG(0x103ce7a8u); g->mm[2] = mmx_pmaddwd(g->mm[2], rd64(A)); }
    { /* psllw mm1, 8 */ g->mm[1] = mmx_psllw(g->mm[1], (uint64_t)0x8u); }
    { /* movq mm6, mm1 */ g->mm[6] = g->mm[1]; }
    { /* punpcklwd mm1, mm7 */ g->mm[1] = mmx_punpcklwd(g->mm[1], g->mm[7]); }
    { /* punpckhwd mm6, mm7 */ g->mm[6] = mmx_punpckhwd(g->mm[6], g->mm[7]); }
    { /* movq mm5, mm4 */ g->mm[5] = g->mm[4]; }
    { /* punpckhwd mm5, mm3 */ g->mm[5] = mmx_punpckhwd(g->mm[5], g->mm[3]); }
    { /* paddd mm2, mm1 */ g->mm[2] = mmx_paddd(g->mm[2], g->mm[1]); }
    { /* pmaddwd mm5, qword ptr [0x103ce7a8] */ uint32_t A = COW_IMG(0x103ce7a8u); g->mm[5] = mmx_pmaddwd(g->mm[5], rd64(A)); }
    { /* movq mm1, mm3 */ g->mm[1] = g->mm[3]; }
    { /* punpcklwd mm3, mm0 */ g->mm[3] = mmx_punpcklwd(g->mm[3], g->mm[0]); }
    { /* movq mm7, mm4 */ g->mm[7] = g->mm[4]; }
    { /* pmaddwd mm3, qword ptr [0x103ce7b0] */ uint32_t A = COW_IMG(0x103ce7b0u); g->mm[3] = mmx_pmaddwd(g->mm[3], rd64(A)); }
    { /* psrad mm2, 8 */ g->mm[2] = mmx_psrad(g->mm[2], (uint64_t)0x8u); }
    { /* paddd mm5, mm6 */ g->mm[5] = mmx_paddd(g->mm[5], g->mm[6]); }
    { /* punpcklwd mm4, mm0 */ g->mm[4] = mmx_punpcklwd(g->mm[4], g->mm[0]); }
    { /* pmaddwd mm4, qword ptr [0x103ce7b8] */ uint32_t A = COW_IMG(0x103ce7b8u); g->mm[4] = mmx_pmaddwd(g->mm[4], rd64(A)); }
    { /* psrad mm5, 8 */ g->mm[5] = mmx_psrad(g->mm[5], (uint64_t)0x8u); }
    { /* psrad mm3, 8 */ g->mm[3] = mmx_psrad(g->mm[3], (uint64_t)0x8u); }
    { /* punpckhwd mm7, mm0 */ g->mm[7] = mmx_punpckhwd(g->mm[7], g->mm[0]); }
    { /* movq mm6, mm3 */ g->mm[6] = g->mm[3]; }
    { /* pmaddwd mm7, qword ptr [0x103ce7b8] */ uint32_t A = COW_IMG(0x103ce7b8u); g->mm[7] = mmx_pmaddwd(g->mm[7], rd64(A)); }
    { /* punpckhwd mm1, mm0 */ g->mm[1] = mmx_punpckhwd(g->mm[1], g->mm[0]); }
    { /* pmaddwd mm1, qword ptr [0x103ce7b0] */ uint32_t A = COW_IMG(0x103ce7b0u); g->mm[1] = mmx_pmaddwd(g->mm[1], rd64(A)); }
    { /* punpckldq mm3, mm2 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[2]); }
    { /* punpckhdq mm6, mm2 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[2]); }
    { /* movd mm2, dword ptr [esi] */ uint32_t A = esi; g->mm[2] = (uint64_t)(uint32_t)rd32(A); }
    { /* psrad mm4, 8 */ g->mm[4] = mmx_psrad(g->mm[4], (uint64_t)0x8u); }
    { /* punpcklbw mm2, dword ptr [0x109b2680] */ uint32_t A = COW_IMG(0x109b2680u); g->mm[2] = mmx_punpcklbw(g->mm[2], (uint64_t)rd32(A)); }
    { /* psrad mm1, 8 */ g->mm[1] = mmx_psrad(g->mm[1], (uint64_t)0x8u); }
    { /* movq mm0, mm4 */ g->mm[0] = g->mm[4]; }
    { /* movq qword ptr [ebp - 8], mm2 */ uint32_t A = sp0 - 0xcu; wr64(A, g->mm[2]); }
    { /* psrad mm7, 8 */ g->mm[7] = mmx_psrad(g->mm[7], (uint64_t)0x8u); }
    { /* punpcklwd mm2, dword ptr [0x109b2680] */ uint32_t A = COW_IMG(0x109b2680u); g->mm[2] = mmx_punpcklwd(g->mm[2], (uint64_t)rd32(A)); }
    { /* punpckldq mm4, mm2 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[2]); }
    { /* punpckhdq mm0, mm2 */ g->mm[0] = mmx_punpckhdq(g->mm[0], g->mm[2]); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* packssdw mm3, mm4 */ g->mm[3] = mmx_packssdw(g->mm[3], g->mm[4]); }
    { /* packssdw mm6, mm0 */ g->mm[6] = mmx_packssdw(g->mm[6], g->mm[0]); }
    { /* movq mm4, mm7 */ g->mm[4] = g->mm[7]; }
    { /* packuswb mm3, mm6 */ g->mm[3] = mmx_packuswb(g->mm[3], g->mm[6]); }
    { /* movq mm6, qword ptr [ebp - 8] */ uint32_t A = sp0 - 0xcu; g->mm[6] = rd64(A); }
    { /* punpckldq mm2, mm5 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[5]); }
    { /* movq qword ptr [edx], mm3 */ uint32_t A = edx; wr64(A, g->mm[3]); }
    { /* punpckhdq mm1, mm5 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[5]); }
    { /* punpckhwd mm6, qword ptr [0x109b2680] */ uint32_t A = COW_IMG(0x109b2680u); g->mm[6] = mmx_punpckhwd(g->mm[6], rd64(A)); }
    { /* punpckldq mm7, mm6 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[6]); }
    { /* punpckhdq mm4, mm6 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[6]); }
    { /* packssdw mm2, mm7 */ g->mm[2] = mmx_packssdw(g->mm[2], g->mm[7]); }
    { /* packssdw mm1, mm4 */ g->mm[1] = mmx_packssdw(g->mm[1], g->mm[4]); }
    { /* packuswb mm2, mm1 */ g->mm[2] = mmx_packuswb(g->mm[2], g->mm[1]); }
    { /* movq qword ptr [edx - 8], mm2 */ uint32_t A = edx + 8u; wr64(A, g->mm[2]); }
    if (edi != 1u)
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        edx = edx + 0x10u;
        ebx = ebx + 4u;
        esi = esi + 4u;
        edi = edi - 1u;
        goto L_10305f0c;
    }
    eax = eax + 4u;
    edx = edx + 0x10u;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10305eef(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10305eef(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
