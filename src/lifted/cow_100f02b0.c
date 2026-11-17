/* f_0x100f02b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f02b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104df770u)) == 0u) goto L_100f0396;
    eax = rd32(COW_IMG(0x104df770u));
    if (rd32(eax + 0x11cu) > 9u)
    {
        ecx = rd32(eax + 0x11cu);
        goto L_100f0403;
    }
    ecx = rd32(eax + 0x11cu);
    t1 = rd32(COW_IMG(0x100f0420u) + ecx * 4u);
    switch (t1 - RD)
    {
    case 0x100f02d3u: goto L_100f02d3;
    case 0x100f02e7u: goto L_100f02e7;
    case 0x100f02fbu: goto L_100f02fb;
    case 0x100f030fu: goto L_100f030f;
    case 0x100f0323u: goto L_100f0323;
    case 0x100f0337u: goto L_100f0337;
    case 0x100f0341u: goto L_100f0341;
    case 0x100f034bu: goto L_100f034b;
    case 0x100f03b0u: goto L_100f03b0;
    case 0x100f03d5u: goto L_100f03d5;
    default: rt_fatal(g, COW_IMG(0x100f02ccu), "switch");
    }
    return 0;
L_100f02d3: ;
    wr32(eax + 0x11cu, 1u);
    edx = in_edx;
    loc_4 = COW_IMG(0x1034ffb8u);
L_100f0408: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x100f04f0u), g->eax, g->ecx, edx, 1, 1, loc_4);
    return rd32(rd32(COW_IMG(0x104df770u)) + 0x11cu);
L_100f02e7: ;
    wr32(eax + 0x11cu, 2u);
    edx = in_edx;
    loc_4 = COW_IMG(0x10357c7cu);
    goto L_100f0408;
L_100f02fb: ;
    wr32(eax + 0x11cu, 3u);
    edx = in_edx;
    loc_4 = COW_IMG(0x103514e4u);
    goto L_100f0408;
L_100f030f: ;
    wr32(eax + 0x11cu, 4u);
    edx = in_edx;
    loc_4 = COW_IMG(0x103514e4u);
    goto L_100f0408;
L_100f0323: ;
    wr32(eax + 0x11cu, 5u);
    edx = in_edx;
    loc_4 = COW_IMG(0x10361d24u);
    goto L_100f0408;
L_100f0337: ;
    wr32(eax + 0x11cu, 7u);
L_100f0341: ;
    edx = in_edx;
    loc_4 = COW_IMG(0x103514e8u);
    goto L_100f0408;
L_100f034b: ;
    t12 = rd32(rd32(COW_IMG(0x104e0af4u)) + 0xcu);
    t13 = rd32(eax + 0x118u);
    g->eax = t13;
    g->esp = sp0;
    t14 = cow_call_regs(g, COW_IMG(0x10103970u), g->eax, g->ecx, t12, 1, 2, t13, t12);
    t15 = rd32(COW_IMG(0x104df770u)) + 0xb8u;
    t16 = rd32(rd32(COW_IMG(0x104df770u)) + 0xb4u);
    t17 = rd32(COW_IMG(0x104df770u)) + 0x64u;
    t18 = rd32(COW_IMG(0x104df770u)) + 0x14u;
    t19 = (t17 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104df770u)) + 0x12u);
    t20 = (t18 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104df770u)) + 0xcu);
    t21 = rd32(rd32(COW_IMG(0x104df770u)));
    g->eax = t21;
    g->esp = sp0 - 8u;
    t22 = cow_call_regs(g, COW_IMG(0x100f9a30u), g->eax, t19, t20, 1, 8, t21, t20, t19, t18, t17, t16, t15, t14);
    t23 = g->edx;
    if ((uint8_t)t22 == 1u)
    {
        eax = t22;
        edx = t23;
        goto L_100f0399;
    }
L_100f0396: ;
    return 0u;
L_100f0399: ;
    t24 = rd32(COW_IMG(0x104df770u));
    wr32(t24 + 0x11cu, 8u);
    ecx = t24;
    loc_4 = COW_IMG(0x1036205cu);
    goto L_100f0408;
L_100f03b0: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0;
    t5 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((t5 & 8u) == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    else
    {
        eax = t5;
        ecx = t6;
        t8 = rd32(COW_IMG(0x104df770u));
        wr32(t8 + 0x11cu, 9u);
        edx = t8;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0;
    t9 = cow_call_regs(g, COW_IMG(0x100f9d50u), g->eax, g->ecx, edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    loc_4 = COW_IMG(0x10362058u);
    goto L_100f0408;
L_100f03d5: ;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0;
    cow_stdcall(g, COW_IMG(0x100f9db0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x104df770u));
    wr32(t4 + 0x11cu, 0u);
    cow_call_regs(g, COW_IMG(0x100f04f0u), g->eax, g->ecx, t3, 1, 1, COW_IMG(0x10362058u));
    return rd32(rd32(COW_IMG(0x104df770u)) + 0x11cu);
L_100f0403: ;
    edx = in_edx;
    loc_4 = COW_IMG(0x10362054u);
    goto L_100f0408;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f02b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f02b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
