/* f_0x102de199 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102de199(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 4u, in_ebp);
    if ((rd8(sp0 + 0xcu) & 3u) == 0u) goto L_102de1c1;
    wr32(sp0 - 0x24u, arg6);
    wr32(sp0 - 0x28u, arg5);
    wr32(sp0 - 0x2cu, arg4);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x30u, t1);
    wr32(sp0 - 0x34u, arg2);
    wr32(sp0 - 0x38u, arg1);
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t2 = cow_cdecl(g, COW_IMG(0x102ddf3au), 7, arg1, arg2, t1, arg4, arg5, arg6, rd32(sp0 - 0x20u));
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_102de1c1: ;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x24u, in_ebx);
    t4 = arg2 + arg4 * arg5;
    wr32(sp0 - 8u, t4);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x20u, 0x20002u);
    wr32(sp0 - 0x1cu, 0x20002u);
    { /* emms  */  }
    t5 = rd32(sp0 + 0xcu) << 2u;
    wr32(sp0 + 0xcu, t5);
    { /* movq mm4, qword ptr [ebp - 0x1c] */ uint32_t A = sp0 - 0x20u; g->mm[4] = rd64(A); }
    { /* pxor mm6, mm6 */ g->mm[6] = mmx_pxor(g->mm[6], g->mm[6]); }
    if ((int32_t)arg2 >= (int32_t)t4)
    {
        edx = arg1;
        goto L_102de2a6;
    }
    eax = arg2;
    edx = arg1;
    loc_8 = t4;
L_102de205: ;
    wr32(sp0 - 0x10u, eax);
    wr32(sp0 - 0xcu, edx);
    if ((int32_t)eax >= (int32_t)(eax + rd32(sp0 + 0xcu)))
    {
        loc_10 = eax;
        loc_c = edx;
        goto L_102de28e;
    }
    ebx = eax + rd32(sp0 + 0xcu);
    esi = arg5 + eax;
    edi = eax;
    loc_10 = eax;
    eax = edx;
    loc_c = edx;
L_102de21d: ;
    { /* movq mm0, qword ptr [edi] */ uint32_t A = edi; g->mm[0] = rd64(A); }
    { /* movq mm2, qword ptr [esi] */ uint32_t A = esi; g->mm[2] = rd64(A); }
    { /* movq mm4, qword ptr [edi + 8] */ uint32_t A = edi + 8u; g->mm[4] = rd64(A); }
    { /* movq mm6, qword ptr [esi + 8] */ uint32_t A = esi + 8u; g->mm[6] = rd64(A); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* movq mm5, mm4 */ g->mm[5] = g->mm[4]; }
    { /* movq mm7, mm6 */ g->mm[7] = g->mm[6]; }
    { /* punpcklbw mm0, dword ptr [ebp - 0x14] */ uint32_t A = sp0 - 0x18u; g->mm[0] = mmx_punpcklbw(g->mm[0], (uint64_t)rd32(A)); }
    { /* punpckhbw mm1, qword ptr [ebp - 0x14] */ uint32_t A = sp0 - 0x18u; g->mm[1] = mmx_punpckhbw(g->mm[1], rd64(A)); }
    { /* punpcklbw mm2, dword ptr [ebp - 0x14] */ uint32_t A = sp0 - 0x18u; g->mm[2] = mmx_punpcklbw(g->mm[2], (uint64_t)rd32(A)); }
    { /* punpckhbw mm3, qword ptr [ebp - 0x14] */ uint32_t A = sp0 - 0x18u; g->mm[3] = mmx_punpckhbw(g->mm[3], rd64(A)); }
    { /* punpcklbw mm4, dword ptr [ebp - 0x14] */ uint32_t A = sp0 - 0x18u; g->mm[4] = mmx_punpcklbw(g->mm[4], (uint64_t)rd32(A)); }
    { /* punpckhbw mm5, qword ptr [ebp - 0x14] */ uint32_t A = sp0 - 0x18u; g->mm[5] = mmx_punpckhbw(g->mm[5], rd64(A)); }
    { /* punpcklbw mm6, dword ptr [ebp - 0x14] */ uint32_t A = sp0 - 0x18u; g->mm[6] = mmx_punpcklbw(g->mm[6], (uint64_t)rd32(A)); }
    { /* punpckhbw mm7, qword ptr [ebp - 0x14] */ uint32_t A = sp0 - 0x18u; g->mm[7] = mmx_punpckhbw(g->mm[7], rd64(A)); }
    { /* paddw mm0, mm1 */ g->mm[0] = mmx_paddw(g->mm[0], g->mm[1]); }
    { /* paddw mm4, mm5 */ g->mm[4] = mmx_paddw(g->mm[4], g->mm[5]); }
    { /* paddw mm0, mm2 */ g->mm[0] = mmx_paddw(g->mm[0], g->mm[2]); }
    { /* paddw mm4, mm6 */ g->mm[4] = mmx_paddw(g->mm[4], g->mm[6]); }
    { /* paddw mm0, mm3 */ g->mm[0] = mmx_paddw(g->mm[0], g->mm[3]); }
    { /* paddw mm4, mm7 */ g->mm[4] = mmx_paddw(g->mm[4], g->mm[7]); }
    { /* paddw mm0, qword ptr [ebp - 0x1c] */ uint32_t A = sp0 - 0x20u; g->mm[0] = mmx_paddw(g->mm[0], rd64(A)); }
    { /* paddw mm4, qword ptr [ebp - 0x1c] */ uint32_t A = sp0 - 0x20u; g->mm[4] = mmx_paddw(g->mm[4], rd64(A)); }
    { /* psraw mm0, 2 */ g->mm[0] = mmx_psraw(g->mm[0], (uint64_t)0x2u); }
    { /* psraw mm4, 2 */ g->mm[4] = mmx_psraw(g->mm[4], (uint64_t)0x2u); }
    { /* packuswb mm0, mm4 */ g->mm[0] = mmx_packuswb(g->mm[0], g->mm[4]); }
    { /* movq qword ptr [ecx], mm0 */ uint32_t A = eax; wr64(A, g->mm[0]); }
    if ((int32_t)(edi + 0x10u) < (int32_t)ebx)
    {
        eax = eax + 8u;
        esi = esi + 0x10u;
        edi = edi + 0x10u;
        goto L_102de21d;
    }
L_102de28e: ;
    if ((int32_t)(arg5 * 2u + loc_10) < (int32_t)loc_8)
    {
        eax = arg5 * 2u + loc_10;
        edx = arg6 + loc_c;
        goto L_102de205;
    }
    edx = arg6 + loc_c;
L_102de2a6: ;
    { /* emms  */  }
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102de199(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102de199(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
