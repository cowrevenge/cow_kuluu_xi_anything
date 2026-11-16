/* f_0x102d9ad8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102d9ad8(Guest* g)
{
    uint32_t al_m54;
    uint32_t al_m58;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
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
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x48u, in_ebx);
    wr32(sp1 - 0x4cu, in_esi);
    wr32(sp1 - 0x50u, in_edi);
    if ((((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u) > 7u)
    {
        eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
        ecx = arg6;
        edx = arg4 != 0u;
        esi = sp1 - 0x40u;
        goto L_102d9bb3;
    }
    t1 = rd32(COW_IMG(0x102d9c45u) + (((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u) * 4u);
    switch (t1 - RD)
    {
    case 0x102d9b1eu: goto L_102d9b1e;
    case 0x102d9b80u: goto L_102d9b80;
    case 0x102d9b84u: goto L_102d9b84;
    case 0x102d9b88u: goto L_102d9b88;
    case 0x102d9b8cu: goto L_102d9b8c;
    case 0x102d9b90u: goto L_102d9b90;
    case 0x102d9b93u: goto L_102d9b93;
    case 0x102d9b97u: goto L_102d9b97;
    default: rt_fatal(g, COW_IMG(0x102d9b17u), "switch");
    }
    return 0;
L_102d9b1e: ;
    wrf32(sp1 - 8u, (float)(double)(float)0.0);
    wrf32(sp1 - 0xcu, (float)(double)(float)0.0);
    wrf32(sp1 - 0x10u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x14u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x1cu, (float)(double)(float)0.0);
    wrf32(sp1 - 0x20u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x24u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x28u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x30u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x34u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x38u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x3cu, (float)(double)(float)0.0);
    wrf32(sp1 - 4u, (float)(double)(float)1.0);
    wrf32(sp1 - 0x18u, (float)(double)(float)1.0);
    wrf32(sp1 - 0x2cu, (float)(double)(float)1.0);
    wrf32(sp1 - 0x40u, (float)(double)(float)1.0);
    eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
    ecx = arg6;
    edx = arg4 != 0u;
    esi = sp1 - 0x40u;
L_102d9bb3: ;
    wr32(sp1 - 0x54u, esi);
    wr32(sp1 - 0x58u, arg2);
    wr32(sp1 - 0x5cu, arg1);
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    cow_stdcall(g, COW_IMG(0x102d67f1u), 3, arg1, arg2, esi);
    t7 = g->edx;
    if (arg3 == 0u)
    {
        edx = t7;
    }
    else
    {
        edx = t7;
        if ((int32_t)rd32(arg3 + 8u) >= 0)
        {
            x1 = (double)(int32_t)rd32(arg3 + 8u);
            x0 = fr(g, (double)rdf32(arg1) + (double)rdf32(COW_IMG(0x1032961cu)));
        }
        else
        {
            x1 = (double)(int32_t)rd32(arg3 + 8u);
            x0 = fr(g, (double)rdf32(arg1) + (double)rdf32(COW_IMG(0x1032961cu)));
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
        if ((int32_t)rd32(arg3) >= 0)
        {
            x0 = fr(g, fr(g, x0 * x1) * (double)rdf32(COW_IMG(0x10329a08u)));
            x1 = (double)(int32_t)rd32(arg3);
        }
        else
        {
            x0 = fr(g, fr(g, x0 * x1) * (double)rdf32(COW_IMG(0x10329a08u)));
            x1 = (double)(int32_t)rd32(arg3);
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
        wrf32(arg1, (float)fr(g, x0 + x1));
        if ((int32_t)rd32(arg3 + 0xcu) >= 0)
        {
            x1 = (double)(int32_t)rd32(arg3 + 0xcu);
            x0 = fr(g, 1.0 - (double)rdf32(arg1 + 4u));
        }
        else
        {
            x1 = (double)(int32_t)rd32(arg3 + 0xcu);
            x0 = fr(g, 1.0 - (double)rdf32(arg1 + 4u));
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
        if ((int32_t)rd32(arg3 + 4u) >= 0)
        {
            x0 = fr(g, fr(g, x0 * x1) * (double)rdf32(COW_IMG(0x10329a08u)));
            x1 = (double)(int32_t)rd32(arg3 + 4u);
        }
        else
        {
            x0 = fr(g, fr(g, x0 * x1) * (double)rdf32(COW_IMG(0x10329a08u)));
            x1 = (double)(int32_t)rd32(arg3 + 4u);
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
        wrf32(arg1 + 4u, (float)fr(g, x0 + x1));
        d8 = fr(g, fr(g, fr(g, (double)rdf32(arg3 + 0x14u) - (double)rdf32(arg3 + 0x10u)) * (double)rdf32(arg1 + 8u)) + (double)rdf32(arg3 + 0x10u));
        wrf32(arg1 + 8u, (float)d8);
    }
    g->ebx = rd32(sp1 - 0x48u);
    g->esi = rd32(sp1 - 0x4cu);
    g->edi = rd32(sp1 - 0x50u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return arg1;
L_102d9b80: ;
    eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
    ecx = arg6;
    edx = arg4 != 0u;
    esi = arg4;
    goto L_102d9bb3;
L_102d9b84: ;
    eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
    ecx = arg6;
    edx = arg4 != 0u;
    esi = arg5;
    goto L_102d9bb3;
L_102d9b88: ;
    wr32(sp1 - 0x54u, arg4);
    wr32(sp1 - 0x58u, arg5);
    ecx = arg6;
    edx = arg4 != 0u;
    al_m54 = arg4;
    al_m58 = arg5;
L_102d9ba9: ;
    wr32(sp1 - 0x5cu, sp1 - 0x40u);
    g->eax = sp1 - 0x40u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    t4 = cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp1 - 0x40u, al_m58, al_m54);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    esi = sp1 - 0x40u;
    goto L_102d9bb3;
L_102d9b8c: ;
    eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
    ecx = arg6;
    edx = arg4 != 0u;
    esi = arg6;
    goto L_102d9bb3;
L_102d9b90: ;
    wr32(sp1 - 0x54u, arg4);
    al_m54 = arg4;
L_102d9b94: ;
    wr32(sp1 - 0x58u, arg6);
    ecx = arg6;
    edx = arg4 != 0u;
    al_m58 = arg6;
    goto L_102d9ba9;
L_102d9b93: ;
    wr32(sp1 - 0x54u, arg5);
    al_m54 = arg5;
    goto L_102d9b94;
L_102d9b97: ;
    wr32(sp1 - 0x54u, arg5);
    wr32(sp1 - 0x58u, arg6);
    wr32(sp1 - 0x5cu, sp1 - 0x40u);
    g->ecx = arg6;
    g->edx = arg4 != 0u;
    g->esp = sp1 - 0x50u;
    cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp1 - 0x40u, arg6, arg5);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp1 - 0x54u, arg4);
    wr32(sp1 - 0x58u, sp1 - 0x40u);
    ecx = t2;
    edx = t3;
    al_m54 = arg4;
    al_m58 = sp1 - 0x40u;
    goto L_102d9ba9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d9ad8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d9ad8(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
