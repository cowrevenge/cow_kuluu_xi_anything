/* f_0x1021ccd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1021ccd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd8(COW_IMG(0x10666e24u)) & 1u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10666e24u));
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10666e24u));
        wr8(COW_IMG(0x10666e24u), (uint8_t)(eax | 1u));
        g->edx = (in_edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x1021c010u), COW_IMG(0x10665a68u), 0);
        t1 = g->ecx;
        t2 = g->edx;
        g->edx = t2;
        t3 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1021d210u));
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    if ((rd8(COW_IMG(0x10666e24u)) & 2u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10666e24u));
        wr8(COW_IMG(0x10666e24u), (uint8_t)(eax | 2u));
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 2u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x1021c010u), COW_IMG(0x106646a8u), 0);
        t5 = g->ecx;
        t6 = g->edx;
        cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1021d200u));
    }
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x9896u, 1u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x9894u, 0xau);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x9898u, 0xau);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x98c2u, 2u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x98c0u, 0x14u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x98c4u, 0x14u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x98eeu, 3u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x98ecu, 0x1eu);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x98f0u, 0x1eu);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x991au, 4u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x9918u, 0x28u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x991cu, 0x28u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x9946u, 5u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x9944u, 0x32u);
    t7 = rd32(COW_IMG(0x104dfd98u));
    wr32(t7 + 0x9948u, 0x32u);
    if (rd32(COW_IMG(0x10666e78u)) != 0u)
    {
        edx = t7;
    }
    else
    {
        edx = t7;
        wr32(COW_IMG(0x10666e78u), 1u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1021c070u), COW_IMG(0x10665a68u), 3, 0u, 0u, 0u);
        t8 = g->edx;
        g->edx = t8;
        cow_thiscall(g, COW_IMG(0x1021c070u), COW_IMG(0x106646a8u), 3, 1u, 0u, 0u);
        t9 = g->edx;
        edx = t9;
    }
    g->ebx = 1u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1021c4c0u), COW_IMG(0x10665a68u), 0);
    t10 = g->edx;
    g->ebx = 1u;
    g->edx = t10;
    cow_thiscall(g, COW_IMG(0x1021c4c0u), COW_IMG(0x106646a8u), 0);
    t11 = g->edx;
    t12 = rd32(COW_IMG(0x10665a74u));
    wr32(COW_IMG(0x10666e28u), 1u);
    if (rd8(COW_IMG(0x10665a80u) + t12) <= 1u)
    {
        edx = t11;
        goto L_1021ce7b;
    }
    eax = 1u;
    edx = t11;
L_1021ce53: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1021cb80u), COW_IMG(0x10665a68u), 1, eax);
    t13 = rd32(COW_IMG(0x10666e28u)) + 1u;
    t14 = rd8(COW_IMG(0x10665a80u) + rd32(COW_IMG(0x10665a74u)));
    wr32(COW_IMG(0x10666e28u), t13);
    if ((int32_t)t13 < (int32_t)t14)
    {
        eax = t13;
        edx = t14;
        goto L_1021ce53;
    }
    edx = t14;
L_1021ce7b: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1021ca50u), COW_IMG(0x10665a68u), 2, 3u, 2u);
    t15 = rd32(COW_IMG(0x10665a74u));
    wr32(COW_IMG(0x10666e28u), 1u);
    if (rd8(COW_IMG(0x10665a80u) + t15) <= 1u) goto L_1021cec6;
    eax = 1u;
    edx = t15;
L_1021ce9e: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1021cb80u), COW_IMG(0x10665a68u), 1, eax);
    t16 = rd32(COW_IMG(0x10666e28u)) + 1u;
    t17 = rd8(COW_IMG(0x10665a80u) + rd32(COW_IMG(0x10665a74u)));
    t18 = rd32(COW_IMG(0x10665a74u));
    wr32(COW_IMG(0x10666e28u), t16);
    if ((int32_t)t16 < (int32_t)t17)
    {
        eax = t16;
        edx = t18;
        goto L_1021ce9e;
    }
L_1021cec6: ;
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x9896u, 1u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x9894u, 0u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x9898u, 0u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x98c2u, 2u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x98c0u, 0x14u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x98c4u, 0x14u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x98eeu, 3u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x98ecu, 0u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x98f0u, 0u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x991au, 4u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x9918u, 0x28u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x991cu, 0x28u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x9946u, 5u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x9944u, 0x32u);
    t19 = rd32(COW_IMG(0x104dfd98u));
    wr32(t19 + 0x9948u, 0x32u);
    g->ebx = 1u;
    g->edx = t19;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1021c4c0u), COW_IMG(0x10665a68u), 0);
    t20 = g->edx;
    g->ebx = 1u;
    g->edx = t20;
    cow_thiscall(g, COW_IMG(0x1021c4c0u), COW_IMG(0x106646a8u), 0);
    t21 = g->edx;
    t22 = rd32(COW_IMG(0x10665a74u));
    wr32(COW_IMG(0x10666e28u), 1u);
    if (rd8(COW_IMG(0x10665a80u) + t22) <= 1u) goto L_1021cfd4;
    eax = 1u;
    edx = t21;
L_1021cfac: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1021cb80u), COW_IMG(0x10665a68u), 1, eax);
    t23 = rd32(COW_IMG(0x10666e28u)) + 1u;
    t24 = rd8(COW_IMG(0x10665a80u) + rd32(COW_IMG(0x10665a74u)));
    wr32(COW_IMG(0x10666e28u), t23);
    if ((int32_t)t23 < (int32_t)t24)
    {
        eax = t23;
        edx = t24;
        goto L_1021cfac;
    }
L_1021cfd4: ;
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x9896u, 1u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x9894u, 0xau);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x9898u, 0xau);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x98c2u, 2u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x98c0u, 0x14u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x98c4u, 0x14u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x98eeu, 3u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x98ecu, 0u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x98f0u, 0u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x991au, 4u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x9918u, 0x28u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x991cu, 0x28u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x9946u, 5u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x9944u, 0u);
    t25 = rd32(COW_IMG(0x104dfd98u));
    wr32(t25 + 0x9948u, 0u);
    g->ebx = 1u;
    g->edx = t25;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1021c4c0u), COW_IMG(0x10665a68u), 0);
    t26 = g->edx;
    g->ebx = 1u;
    g->edx = t26;
    cow_thiscall(g, COW_IMG(0x1021c4c0u), COW_IMG(0x106646a8u), 0);
    t27 = g->edx;
    t28 = rd32(COW_IMG(0x10665a74u));
    wr32(COW_IMG(0x10666e28u), 1u);
    if (rd8(COW_IMG(0x10665a80u) + t28) <= 1u) goto L_1021d0e3;
    eax = 1u;
    edx = t27;
L_1021d0bb: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1021cb80u), COW_IMG(0x10665a68u), 1, eax);
    t29 = rd32(COW_IMG(0x10666e28u)) + 1u;
    t30 = rd8(COW_IMG(0x10665a80u) + rd32(COW_IMG(0x10665a74u)));
    wr32(COW_IMG(0x10666e28u), t29);
    if ((int32_t)t29 < (int32_t)t30)
    {
        eax = t29;
        edx = t30;
        goto L_1021d0bb;
    }
L_1021d0e3: ;
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x9896u, 1u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x9894u, 0xau);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x9898u, 0xau);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x98c2u, 2u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x98c0u, 0x14u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x98c4u, 0x14u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x98eeu, 3u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x98ecu, 0x21u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x98f0u, 0x21u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x991au, 4u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x9918u, 0x28u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x991cu, 0x28u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x9946u, 5u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x9944u, 0u);
    t31 = rd32(COW_IMG(0x104dfd98u));
    wr32(t31 + 0x9948u, 0u);
    g->ebx = 1u;
    g->edx = t31;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1021c4c0u), COW_IMG(0x10665a68u), 0);
    t32 = g->edx;
    g->ebx = 1u;
    g->edx = t32;
    cow_thiscall(g, COW_IMG(0x1021c4c0u), COW_IMG(0x106646a8u), 0);
    t33 = g->ecx;
    t34 = g->edx;
    t35 = rd32(COW_IMG(0x10665a74u));
    wr32(COW_IMG(0x10666e28u), 1u);
    if (rd8(COW_IMG(0x10665a80u) + t35) <= 1u)
    {
        eax = t35;
        edx = t34;
        goto L_1021d1fc;
    }
    edx = t34;
    ebx = 1u;
L_1021d1d2: ;
    g->esp = sp0 - 4u;
    t36 = cow_thiscall(g, COW_IMG(0x1021cb80u), COW_IMG(0x10665a68u), 1, ebx);
    t37 = rd32(COW_IMG(0x10666e28u)) + 1u;
    t38 = rd8(COW_IMG(0x10665a80u) + rd32(COW_IMG(0x10665a74u)));
    t39 = rd32(COW_IMG(0x10665a74u));
    wr32(COW_IMG(0x10666e28u), t37);
    if ((int32_t)t37 < (int32_t)t38)
    {
        edx = t39;
        ebx = t37;
        goto L_1021d1d2;
    }
    eax = t36;
    edx = t39;
L_1021d1fc: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021ccd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021ccd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
