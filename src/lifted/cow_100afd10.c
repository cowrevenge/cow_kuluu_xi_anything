/* f_0x100afd10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100afd10(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_c;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t3 = g->edx;
    if ((rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 5u) & 0xfu) > 0xau)
    {
        edx = t3;
        goto L_100afd5f;
    }
    eax = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 5u) & 0xfu;
    edx = t3;
    t4 = rd32(COW_IMG(0x100afe8cu) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x100afd43u: goto L_100afd43;
    case 0x100afd72u: goto L_100afd72;
    case 0x100afd8du: goto L_100afd8d;
    case 0x100afdb0u: goto L_100afdb0;
    case 0x100afdd3u: goto L_100afdd3;
    case 0x100afdfau: goto L_100afdfa;
    case 0x100afe21u: goto L_100afe21;
    case 0x100afe39u: goto L_100afe39;
    case 0x100afe51u: goto L_100afe51;
    case 0x100afe60u: goto L_100afe60;
    default: rt_fatal(g, COW_IMG(0x100afd3cu), "switch");
    }
    return;
L_100afd43: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t39 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t40 = g->edx;
    g->edx = t40;
    t41 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t42 = g->edx;
    if (t41 == t39) goto L_100afe7e;
    edx = t42;
L_100afd5f: ;
    g->esp = sp0 - 8u;
    t43 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 6u);
    wr16(self + 0x256u, (uint16_t)t43);
    return;
L_100afd72: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t35 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t36 = g->edx;
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t38 = g->edx;
    edx = t38;
    zf = t37 == t35;
L_100afe78: ;
    if (zf) goto L_100afd5f;
L_100afe7e: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    return;
L_100afd8d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t31 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t34 = g->edx;
    if ((int32_t)t33 <= (int32_t)t31)
    {
        edx = t34;
        goto L_100afd5f;
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    return;
L_100afdb0: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t28 = g->edx;
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t30 = g->edx;
    if ((int32_t)t29 >= (int32_t)t27)
    {
        edx = t30;
        goto L_100afd5f;
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    return;
L_100afdd3: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t23 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t26 = g->edx;
    if ((int32_t)t25 < (int32_t)t23)
    {
        edx = t26;
        goto L_100afd5f;
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    return;
L_100afdfa: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t22 = g->edx;
    if ((int32_t)t21 > (int32_t)t19)
    {
        edx = t22;
        goto L_100afd5f;
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    return;
L_100afe21: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t18 = g->edx;
    edx = t18;
    zf = t15 == t17;
    goto L_100afe78;
L_100afe39: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t14 = g->edx;
    edx = t14;
    zf = (t11 | t13) == 0u;
    goto L_100afe78;
L_100afe51: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    edi = t7;
    loc_c = 1u;
L_100afe6f: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, loc_c);
    t10 = g->edx;
    edx = t10;
    zf = (t9 & edi) == 0u;
    goto L_100afe78;
L_100afe60: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    edi = ~t5;
    loc_c = 3u;
    goto L_100afe6f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100afd10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100afd10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
