/* f_0x10301d05 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10301d05(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4c;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
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
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    if ((((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u) > 7u)
    {
        ecx = arg6;
        edx = arg4 != 0u;
        goto L_10301d89;
    }
    t1 = rd32(COW_IMG(0x10301e38u) + (((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u) * 4u);
    switch (t1 - RD)
    {
    case 0x10301d42u: goto L_10301d42;
    case 0x10301d4eu: goto L_10301d4e;
    case 0x10301d51u: goto L_10301d51;
    case 0x10301d54u: goto L_10301d54;
    case 0x10301d58u: goto L_10301d58;
    case 0x10301d5bu: goto L_10301d5b;
    case 0x10301d5eu: goto L_10301d5e;
    case 0x10301d62u: goto L_10301d62;
    default: rt_fatal(g, COW_IMG(0x10301d3bu), "switch");
    }
    return 0;
L_10301d42: ;
    wr32(sp0 - 0x54u, sp0 - 0x44u);
    g->edx = arg4 != 0u;
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x102fd8f4u), 1, sp0 - 0x44u);
    t8 = g->edx;
    ecx = sp0 - 0x44u;
    edx = t8;
L_10301d89: ;
    if (arg3 == 0u)
    {
        wr32(sp0 - 0x48u, sp0 - 0x44u);
        wr32(sp0 - 0x4cu, arg2);
        loc_4c = arg2;
    }
    else
    {
        { /* femms  */  }
        { /* movq mm1, qword ptr [eax] */ uint32_t A = arg3; g->mm[1] = rd64(A); }
        { /* movq mm2, qword ptr [eax + 8] */ uint32_t A = arg3 + 8u; g->mm[2] = rd64(A); }
        { /* movq mm0, qword ptr [ecx] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
        { /* pi2fd mm1, mm1 */ g->mm[1] = n3d_pi2fd(g->mm[1], g->mm[1]); }
        { /* movq mm4, qword ptr [eax + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[4] = rd64(A); }
        { /* pi2fd mm2, mm2 */ g->mm[2] = n3d_pi2fd(g->mm[2], g->mm[2]); }
        { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
        { /* punpckhdq mm3, mm3 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[3]); }
        { /* pfrcp mm5, mm2 */ g->mm[5] = n3d_pfrcp(g->mm[5], g->mm[2]); }
        { /* pfrcp mm3, mm3 */ g->mm[3] = n3d_pfrcp(g->mm[3], g->mm[3]); }
        { /* pfsub mm0, mm1 */ g->mm[0] = n3d_pfsub(g->mm[0], g->mm[1]); }
        { /* punpckldq mm5, mm3 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[3]); }
        { /* pfrcpit1 mm2, mm5 */ g->mm[2] = n3d_pfrcpit1(g->mm[2], g->mm[5]); }
        { /* movd mm3, dword ptr [ecx + 8] */ uint32_t A = arg2 + 8u; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
        { /* pfrcpit2 mm2, mm5 */ g->mm[2] = n3d_pfrcpit2(g->mm[2], g->mm[5]); }
        { /* pfmul mm2, qword ptr [0x10348518] */ uint32_t A = COW_IMG(0x10348518u); g->mm[2] = n3d_pfmul(g->mm[2], rd64(A)); }
        { /* movq mm5, mm4 */ g->mm[5] = g->mm[4]; }
        { /* pfmul mm0, mm2 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[2]); }
        { /* punpckhdq mm5, mm5 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[5]); }
        { /* pfsub mm0, qword ptr [0x10348508] */ uint32_t A = COW_IMG(0x10348508u); g->mm[0] = n3d_pfsub(g->mm[0], rd64(A)); }
        { /* pfsub mm5, mm4 */ g->mm[5] = n3d_pfsub(g->mm[5], g->mm[4]); }
        { /* pfrcp mm6, mm5 */ g->mm[6] = n3d_pfrcp(g->mm[6], g->mm[5]); }
        { /* pxor mm0, qword ptr [0x10348500] */ uint32_t A = COW_IMG(0x10348500u); g->mm[0] = mmx_pxor(g->mm[0], rd64(A)); }
        { /* pfrcpit1 mm5, mm6 */ g->mm[5] = n3d_pfrcpit1(g->mm[5], g->mm[6]); }
        { /* pfrcpit2 mm5, mm6 */ g->mm[5] = n3d_pfrcpit2(g->mm[5], g->mm[6]); }
        { /* pfsub mm3, mm4 */ g->mm[3] = n3d_pfsub(g->mm[3], g->mm[4]); }
        { /* pfmul mm3, mm5 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[5]); }
        { /* movq qword ptr [edx], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
        { /* movd dword ptr [edx + 8], mm3 */ uint32_t A = arg1 + 8u; wr32(A, (uint32_t)((uint32_t)g->mm[3])); }
        { /* femms  */  }
        wr32(sp0 - 0x48u, sp0 - 0x44u);
        wr32(sp0 - 0x4cu, arg1);
        ecx = arg2;
        edx = arg1;
        loc_4c = arg1;
    }
    wr32(sp0 - 0x50u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    cow_stdcall(g, COW_IMG(0x10301700u), 3, arg1, loc_4c, sp0 - 0x44u);
    t9 = g->edx;
    g->edx = t9;
    return arg1;
L_10301d4e: ;
    wr32(sp0 - 0x54u, arg4);
    ecx = arg6;
    edx = arg4 != 0u;
    loc_54 = arg4;
L_10301d7f: ;
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, sp0 - 0x44u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    cow_stdcall(g, COW_IMG(0x10300970u), 3, sp0 - 0x44u, 0u, loc_54);
    t6 = g->ecx;
    t7 = g->edx;
    ecx = t6;
    edx = t7;
    goto L_10301d89;
L_10301d51: ;
    wr32(sp0 - 0x54u, arg5);
    ecx = arg6;
    edx = arg4 != 0u;
    loc_54 = arg5;
    goto L_10301d7f;
L_10301d54: ;
    wr32(sp0 - 0x54u, arg4);
    wr32(sp0 - 0x58u, arg5);
    ecx = arg6;
    edx = arg4 != 0u;
    loc_54 = arg4;
    loc_58 = arg5;
L_10301d72: ;
    wr32(sp0 - 0x5cu, sp0 - 0x44u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    cow_stdcall(g, COW_IMG(0x1030178bu), 3, sp0 - 0x44u, loc_58, loc_54);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x54u, sp0 - 0x44u);
    ecx = t4;
    edx = t5;
    loc_54 = sp0 - 0x44u;
    goto L_10301d7f;
L_10301d58: ;
    wr32(sp0 - 0x54u, arg6);
    ecx = arg6;
    edx = arg4 != 0u;
    loc_54 = arg6;
    goto L_10301d7f;
L_10301d5b: ;
    wr32(sp0 - 0x54u, arg4);
    loc_54 = arg4;
L_10301d5f: ;
    wr32(sp0 - 0x58u, arg6);
    ecx = arg6;
    edx = arg4 != 0u;
    loc_58 = arg6;
    goto L_10301d72;
L_10301d5e: ;
    wr32(sp0 - 0x54u, arg5);
    loc_54 = arg5;
    goto L_10301d5f;
L_10301d62: ;
    wr32(sp0 - 0x54u, arg5);
    wr32(sp0 - 0x58u, arg6);
    wr32(sp0 - 0x5cu, sp0 - 0x44u);
    g->ecx = arg6;
    g->edx = arg4 != 0u;
    g->esp = sp0 - 0x50u;
    cow_stdcall(g, COW_IMG(0x1030178bu), 3, sp0 - 0x44u, arg6, arg5);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x54u, arg4);
    wr32(sp0 - 0x58u, sp0 - 0x44u);
    ecx = t2;
    edx = t3;
    loc_54 = arg4;
    loc_58 = sp0 - 0x44u;
    goto L_10301d72;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10301d05(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10301d05(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
