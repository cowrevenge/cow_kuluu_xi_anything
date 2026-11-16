/* f_0x10322c2a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10322c2a(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x109b2a3cu)) != 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->eax = in_eax;
        g->esp = sp0 - 0xcu;
        t1 = cow_fastcall(g, COW_IMG(0x1032335bu), self, in_edx, 0);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            wr32(COW_IMG(0x109b2a3cu), COW_IMG(0x10323391u));
        }
        else
        {
            ecx = t2;
            edx = t3;
            t4 = rd32(COW_IMG(0x103290f0u));
            wr32(COW_IMG(0x109b2a3cu), t4);
            eax = t4;
        }
    }
    if (arg1 == 0u) goto L_10322ce2;
    wr32(COW_IMG(0x109b2a2cu), arg1);
    if (rd8(arg1) != 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, COW_IMG(0x10322da7u), ecx, 4, COW_IMG(0x103d3570u), 0x40u, COW_IMG(0x109b2a2cu), in_edi);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    wr32(COW_IMG(0x109b2a30u), arg1 + 0x40u);
    if (arg1 + 0x40u == 0u)
    {
        eax = arg1 + 0x40u;
    }
    else
    {
        if (rd8(arg1 + 0x40u) == 0u)
        {
            eax = arg1 + 0x40u;
        }
        else
        {
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall_cdecl(g, COW_IMG(0x10322da7u), ecx, 4, COW_IMG(0x103d34b8u), 0x16u, COW_IMG(0x109b2a30u), in_edi);
            t7 = g->edx;
            eax = rd32(COW_IMG(0x109b2a30u));
            edx = t7;
        }
    }
    t8 = rd32(COW_IMG(0x109b2a2cu));
    wr32(COW_IMG(0x109b2a34u), 0u);
    if (t8 == 0u)
    {
        ecx = t8;
        goto L_10322cd3;
    }
    ecx = t8;
    if (rd8(ecx) == 0u) goto L_10322cd3;
    if (eax == 0u) goto L_10322ccc;
    if (rd8(eax) == 0u) goto L_10322ccc;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_call_regs(g, COW_IMG(0x10322dffu), eax, g->ecx, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
L_10322ce7: ;
    if (rd32(COW_IMG(0x109b2a34u)) == 0u) goto L_10322da1;
    g->esp = sp0 - 4u;
    t21 = cow_call_regs(g, COW_IMG(0x10323274u), eax, ecx, edx, 1, 3, arg1 + 0x80u, in_edi, in_esi);
    t22 = g->edx;
    if (t21 == 0u) goto L_10322da1;
    edx = t22;
    edi = t21;
    g->eax = (uint16_t)edi;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_thiscall(g, rd32(COW_IMG(0x103292f0u)), arg1 + 0x80u, 1, (uint16_t)edi);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 == 0u) goto L_10322da1;
    eax = t23;
    ecx = t24;
    edx = t25;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t26 = cow_thiscall(g, rd32(COW_IMG(0x103292e8u)), ecx, 2, rd32(COW_IMG(0x109b2a1cu)), 1u);
    t27 = g->ecx;
    t28 = g->edx;
    if (t26 == 0u) goto L_10322da1;
    ecx = t27;
    edx = t28;
    if (arg2 != 0u)
    {
        t29 = rd16(COW_IMG(0x109b2a1cu));
        wr16(arg2, (uint16_t)t29);
        t30 = rd16(COW_IMG(0x109b2a38u));
        wr16(arg2 + 2u, (uint16_t)t30);
        wr16(arg2 + 4u, (uint16_t)edi);
        ecx = ((ecx | t29) & 0xffff0000u) | t30;
    }
    if (arg3 == 0u) goto L_10322d9c;
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t31 = cow_thiscall(g, rd32(COW_IMG(0x109b2a3cu)), ecx, 4, rd32(COW_IMG(0x109b2a1cu)), 0x1001u, arg3, 0x40u);
    t32 = g->ecx;
    t33 = g->edx;
    if (t31 == 0u) goto L_10322da1;
    ecx = t32;
    edx = t33;
    g->eax = arg3 + 0x40u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t34 = cow_thiscall(g, rd32(COW_IMG(0x109b2a3cu)), ecx, 4, rd32(COW_IMG(0x109b2a38u)), 0x1002u, arg3 + 0x40u, 0x40u);
    t35 = g->ecx;
    t36 = g->edx;
    if (t34 == 0u) goto L_10322da1;
    eax = t34;
    ecx = t35;
    edx = t36;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10325b9eu), 5, edi, arg3 + 0x80u, 0xau, in_edi, in_esi);
L_10322d9c: ;
    eax = 1u;
L_10322da3: ;
    return eax;
L_10322ccc: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_call_regs(g, COW_IMG(0x1032308au), eax, g->ecx, g->edx, 1, 0);
    t13 = g->ecx;
    t14 = g->edx;
    eax = t12;
    ecx = t13;
    edx = t14;
    goto L_10322ce7;
L_10322cd3: ;
    if (eax == 0u) goto L_10322ce2;
    if (rd8(eax) == 0u) goto L_10322ce2;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t15 = cow_call_regs(g, COW_IMG(0x1032319du), eax, g->ecx, g->edx, 1, 0);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    goto L_10322ce7;
L_10322ce2: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t18 = cow_fastcall(g, COW_IMG(0x1032325au), ecx, edx, 0);
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    goto L_10322ce7;
L_10322da1: ;
    eax = 0u;
    goto L_10322da3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10322c2a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10322c2a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
