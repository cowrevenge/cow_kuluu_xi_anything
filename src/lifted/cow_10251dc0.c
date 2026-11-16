/* f_0x10251dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10251dc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd8(arg1) & 2u) != 0u) goto L_10251dd0;
    return in_eax & 0xffffff00u;
L_10251dd0: ;
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x490u) & 0x40u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        if (rd32(arg1 + 4u) == 0u)
        {
            eax = rd32(arg1 + 4u);
            goto L_10251e07;
        }
        eax = rd32(arg1 + 4u);
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_10251dfd;
        }
        eax = eax - 1u;
        if (eax != 1u)
        {
            edx = in_edx;
            goto L_10251e12;
        }
        eax = eax - 1u;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10252130u), 2, arg1, 0xffffffffu);
        t1 = g->edx;
        edx = t1;
L_10251e0f: ;
    }
L_10251e12: ;
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x490u) & 0x80u) != 0u)
    {
        if (rd32(arg1 + 4u) == 0u)
        {
            eax = rd32(arg1 + 4u);
            goto L_10251e4a;
        }
        eax = rd32(arg1 + 4u);
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_10251e40;
        }
        eax = eax - 1u;
        if (eax != 1u) goto L_10251e55;
        eax = eax - 1u;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10252130u), 2, arg1, 1u);
L_10251e52: ;
    }
L_10251e55: ;
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x490u) & 0x1000u) != 0u)
    {
        edx = rd32(COW_IMG(0x104e1d44u));
        if (rd32(arg1 + 4u) == 0u)
        {
            eax = rd32(arg1 + 4u);
            goto L_10251e9f;
        }
        eax = rd32(arg1 + 4u);
        if (eax == 1u) goto L_10251e8c;
        eax = eax - 1u;
        if (eax != 1u) goto L_10251eb3;
        t4 = 1u - rd32(arg1 + 0x38u);
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10252130u), 2, arg1, t4);
L_10251eb0: ;
    }
L_10251eb3: ;
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x490u) & 0x2000u) == 0u)
    {
        edx = rd32(COW_IMG(0x104e1d44u));
    }
    else
    {
        edx = rd32(COW_IMG(0x104e1d44u));
        if ((rd32(edx + 0x478u) & 0x200u) == 0u)
        {
            if (rd32(arg1 + 4u) == 0u)
            {
                eax = rd32(arg1 + 4u);
                goto L_10251f00;
            }
            eax = rd32(arg1 + 4u);
            if (eax == 1u)
            {
                eax = eax - 1u;
                goto L_10251ef3;
            }
            eax = eax - 1u;
            if (eax != 1u) goto L_10251f0e;
            t7 = rd32(arg1 + 0x38u) - 1u;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x10252130u), 2, arg1, t7);
            t8 = g->edx;
            edx = t8;
L_10251f0b: ;
        }
    }
L_10251f0e: ;
    if (rd32(rd32(COW_IMG(0x104e1d44u)) + 0x480u) & 1u)
    {
        if (rd32(arg1 + 4u) == 0u)
        {
            if ((int32_t)(rd32(arg1 + 0x10u) + rd32(arg1 + 0x24u)) >= 12)
            {
                eax = rd32(arg1 + 0x10u) + rd32(arg1 + 0x24u);
                edx = rd32(arg1 + 0x10u);
                goto L_10251fca;
            }
            eax = rd32(arg1 + 0x10u) + rd32(arg1 + 0x24u);
            if (rd32(eax * 0x1cu + rd32(arg1 + 0x3cu) + 0x108u) != 0u)
            {
                ecx = 0u;
                edx = eax * 8u - eax;
                eax = rd32(eax * 0x1cu + rd32(arg1 + 0x3cu) + 0x108u);
                goto L_10251fe9;
            }
            ecx = 0u;
            edx = eax * 8u - eax;
            eax = rd32(eax * 0x1cu + rd32(arg1 + 0x3cu) + 0x108u);
L_10251f6a: ;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0;
            t16 = cow_cdecl(g, COW_IMG(0x10275630u), 3, 0u, in_edi, in_esi);
            t17 = g->ecx;
            t18 = g->edx;
            g->edx = t18;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10252020u), 2, arg1, t16);
            t19 = g->edx;
            edx = t19;
L_10251f7a: ;
            wr32(arg1 + 0x14u, 0u);
            wr32(arg1 + 0x2cu, 0u);
            wr32(arg1 + 0x30u, 0x1fu);
            wr32(arg1 + 4u, 1u);
        }
        else
        {
            eax = rd32(arg1 + 4u);
            if (eax == 1u)
            {
                t13 = rd32(arg1 + 0x30u);
                t14 = rd32(arg1 + 0x38u);
                wr32(arg1 + 4u, 2u);
                wr32(arg1 + 0x30u, t13 - t14);
                wr32(arg1 + 0x18u, 0u);
            }
        }
    }
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x480u) & 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x480u) & 8u;
        goto L_10252000;
    }
    if (rd32(arg1 + 4u) == 0u)
    {
        eax = rd32(arg1 + 4u);
        goto L_10252005;
    }
    eax = rd32(arg1 + 4u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10251ff5;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10252000;
    }
    t20 = rd32(arg1 + 0x30u);
    t21 = rd32(arg1 + 0x38u);
    wr32(arg1 + 0x18u, 0u);
    wr32(arg1 + 0x30u, t20 + t21);
    wr32(arg1 + 4u, 1u);
    g->edx = t21;
    return (t20 + t21 & 0xffffff00u) | 1u;
L_10251dfd: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10252040u), 3, arg1, 0xffffffffu, in_edi);
    t2 = g->edx;
    edx = t2;
    goto L_10251e0f;
L_10251e07: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102520f0u), 2, arg1, 0xffffffffu);
    t3 = g->edx;
    edx = t3;
    goto L_10251e0f;
L_10251e40: ;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10252040u), 3, arg1, 1u, in_edi);
    goto L_10251e52;
L_10251e4a: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102520f0u), 2, arg1, 1u);
    goto L_10251e52;
L_10251e8c: ;
    t5 = 1u - rd32(arg1 + 0x30u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10252040u), 3, arg1, t5, in_edi);
    goto L_10251eb0;
L_10251e9f: ;
    t6 = 1u - rd32(arg1 + 0x28u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102520f0u), 2, arg1, t6);
    goto L_10251eb0;
L_10251ef3: ;
    t9 = rd32(arg1 + 0x30u) - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10252040u), 3, arg1, t9, in_edi);
    t10 = g->edx;
    edx = t10;
    goto L_10251f0b;
L_10251f00: ;
    t11 = rd32(arg1 + 0x28u) - 1u;
    g->edx = t11;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102520f0u), 2, arg1, t11);
    t12 = g->edx;
    edx = t12;
    goto L_10251f0b;
L_10251fca: ;
    if ((int32_t)(eax - 0xcu) >= 2) goto L_10251f7a;
    ecx = eax - 0xcu;
    if (rd32(eax * 0x24u + rd32(arg1 + 0x3cu) - 0xe8u) == 0u)
    {
        edx = eax * 9u;
        eax = rd32(eax * 0x24u + rd32(arg1 + 0x3cu) - 0xe8u);
        goto L_10251f6a;
    }
    edx = eax * 9u;
    eax = rd32(eax * 0x24u + rd32(arg1 + 0x3cu) - 0xe8u);
    eax = eax - 0x10u;
L_10251fe9: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10252020u), 2, arg1, eax);
    t15 = g->edx;
    edx = t15;
    goto L_10251f7a;
L_10251ff5: ;
    if (rd32(arg1 + 0x3cu) == 0u) goto L_10252005;
    wr32(arg1 + 0x30u, 0u);
    wr32(arg1 + 4u, 0u);
L_10252000: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10252005: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t22 = cow_cdecl(g, COW_IMG(0x10252480u), 1, arg1);
    t23 = g->edx;
    g->edx = t23;
    return t22 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10251dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10251dc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
