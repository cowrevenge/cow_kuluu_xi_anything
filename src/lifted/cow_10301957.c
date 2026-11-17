/* f_0x10301957 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10301957(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
        eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
        ecx = arg6;
        edx = arg4 != 0u;
        esi = sp0 - 0x44u;
        goto L_10301a47;
    }
    t1 = rd32(COW_IMG(0x10301abfu) + (((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u) * 4u);
    switch (t1 - RD)
    {
    case 0x10301999u: goto L_10301999;
    case 0x103019ebu: goto L_103019eb;
    case 0x103019efu: goto L_103019ef;
    case 0x103019f3u: goto L_103019f3;
    case 0x10301a04u: goto L_10301a04;
    case 0x10301a08u: goto L_10301a08;
    case 0x10301a19u: goto L_10301a19;
    case 0x10301a2au: goto L_10301a2a;
    default: rt_fatal(g, COW_IMG(0x10301992u), "switch");
    }
    return 0;
L_10301999: ;
    wrf32(sp0 - 0xcu, (float)(double)(float)0.0);
    wrf32(sp0 - 0x10u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x14u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x18u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x20u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x24u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x28u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x2cu, (float)(double)(float)0.0);
    wrf32(sp0 - 0x34u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x38u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x3cu, (float)(double)(float)0.0);
    wrf32(sp0 - 0x40u, (float)(double)(float)0.0);
    wrf32(sp0 - 8u, (float)(double)(float)1.0);
    wrf32(sp0 - 0x1cu, (float)(double)(float)1.0);
    wrf32(sp0 - 0x30u, (float)(double)(float)1.0);
    wrf32(sp0 - 0x44u, (float)(double)(float)1.0);
    eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
    ecx = arg6;
    edx = arg4 != 0u;
    esi = sp0 - 0x44u;
L_10301a47: ;
    wr32(sp0 - 0x54u, esi);
    wr32(sp0 - 0x58u, arg2);
    wr32(sp0 - 0x5cu, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    cow_stdcall(g, COW_IMG(0x10301700u), 3, arg1, arg2, esi);
    t16 = g->edx;
    if (arg3 == 0u)
    {
        edx = t16;
    }
    else
    {
        edx = t16;
        { /* femms  */  }
        { /* movq mm0, qword ptr [eax] */ uint32_t A = arg1; g->mm[0] = rd64(A); }
        { /* movd mm1, dword ptr [eax + 8] */ uint32_t A = arg1 + 8u; g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
        { /* movq mm2, qword ptr [ecx] */ uint32_t A = arg3; g->mm[2] = rd64(A); }
        { /* pxor mm0, qword ptr [0x10348500] */ uint32_t A = COW_IMG(0x10348500u); g->mm[0] = mmx_pxor(g->mm[0], rd64(A)); }
        { /* movq mm3, qword ptr [ecx + 8] */ uint32_t A = arg3 + 8u; g->mm[3] = rd64(A); }
        { /* movq mm4, qword ptr [ecx + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[4] = rd64(A); }
        { /* pi2fd mm2, mm2 */ g->mm[2] = n3d_pi2fd(g->mm[2], g->mm[2]); }
        { /* pi2fd mm3, mm3 */ g->mm[3] = n3d_pi2fd(g->mm[3], g->mm[3]); }
        { /* pfadd mm0, qword ptr [0x10348508] */ uint32_t A = COW_IMG(0x10348508u); g->mm[0] = n3d_pfadd(g->mm[0], rd64(A)); }
        { /* pfmul mm3, qword ptr [0x10348510] */ uint32_t A = COW_IMG(0x10348510u); g->mm[3] = n3d_pfmul(g->mm[3], rd64(A)); }
        { /* movq mm5, mm4 */ g->mm[5] = g->mm[4]; }
        { /* punpckhdq mm5, mm5 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[5]); }
        { /* pfsub mm5, mm4 */ g->mm[5] = n3d_pfsub(g->mm[5], g->mm[4]); }
        { /* pfmul mm0, mm3 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[3]); }
        { /* pfmul mm1, mm5 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[5]); }
        { /* pfadd mm1, mm4 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[4]); }
        { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
        { /* movq qword ptr [eax], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
        { /* movd dword ptr [eax + 8], mm1 */ uint32_t A = arg1 + 8u; wr32(A, (uint32_t)((uint32_t)g->mm[1])); }
        { /* femms  */  }
    }
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return arg1;
L_103019eb: ;
    eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
    ecx = arg6;
    edx = arg4 != 0u;
    esi = arg4;
    goto L_10301a47;
L_103019ef: ;
    eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
    ecx = arg6;
    edx = arg4 != 0u;
    esi = arg5;
    goto L_10301a47;
L_103019f3: ;
    { /* femms  */  }
    wr32(sp0 - 0x54u, arg4);
    wr32(sp0 - 0x58u, arg5);
    wr32(sp0 - 0x5cu, sp0 - 0x44u);
    g->eax = sp0 - 0x44u;
    g->ecx = arg6;
    g->edx = arg4 != 0u;
    g->esp = sp0 - 0x50u;
    t13 = cow_stdcall(g, COW_IMG(0x1030178bu), 3, sp0 - 0x44u, arg5, arg4);
    t14 = g->ecx;
    t15 = g->edx;
    { /* femms  */  }
    eax = t13;
    ecx = t14;
    edx = t15;
    esi = sp0 - 0x44u;
    goto L_10301a47;
L_10301a04: ;
    eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
    ecx = arg6;
    edx = arg4 != 0u;
    esi = arg6;
    goto L_10301a47;
L_10301a08: ;
    { /* femms  */  }
    wr32(sp0 - 0x54u, arg4);
    wr32(sp0 - 0x58u, arg6);
    wr32(sp0 - 0x5cu, sp0 - 0x44u);
    g->eax = sp0 - 0x44u;
    g->ecx = arg6;
    g->edx = arg4 != 0u;
    g->esp = sp0 - 0x50u;
    t10 = cow_stdcall(g, COW_IMG(0x1030178bu), 3, sp0 - 0x44u, arg6, arg4);
    t11 = g->ecx;
    t12 = g->edx;
    { /* femms  */  }
    eax = t10;
    ecx = t11;
    edx = t12;
    esi = sp0 - 0x44u;
    goto L_10301a47;
L_10301a19: ;
    { /* femms  */  }
    wr32(sp0 - 0x54u, arg5);
    wr32(sp0 - 0x58u, arg6);
    wr32(sp0 - 0x5cu, sp0 - 0x44u);
    g->eax = sp0 - 0x44u;
    g->ecx = arg6;
    g->edx = arg4 != 0u;
    g->esp = sp0 - 0x50u;
    t7 = cow_stdcall(g, COW_IMG(0x1030178bu), 3, sp0 - 0x44u, arg6, arg5);
    t8 = g->ecx;
    t9 = g->edx;
    { /* femms  */  }
    eax = t7;
    ecx = t8;
    edx = t9;
    esi = sp0 - 0x44u;
    goto L_10301a47;
L_10301a2a: ;
    { /* femms  */  }
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
    wr32(sp0 - 0x5cu, sp0 - 0x44u);
    g->eax = sp0 - 0x44u;
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x1030178bu), 3, sp0 - 0x44u, sp0 - 0x44u, arg4);
    t5 = g->ecx;
    t6 = g->edx;
    { /* femms  */  }
    eax = t4;
    ecx = t5;
    edx = t6;
    esi = sp0 - 0x44u;
    goto L_10301a47;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10301957(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10301957(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
