/* f_0x101daf70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_101daf70(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10160c80u), in_eax, COW_IMG(0x10621838u), g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_101daf83;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_101daf83: ;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x44u, 0u);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        edx = t5;
        goto L_101daf95;
    }
    eax = t4;
    return eax;
L_101daf95: ;
    g->eax = rd32(rd32(COW_IMG(0x1066346cu)));
    g->edx = edx;
    t6 = rd32(rd32(COW_IMG(0x1066346cu)));
    t7 = rd32(COW_IMG(0x1066346cu));
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, rd32(t6 + 0x58u), t7, 1, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    if (arg1 != 0x11u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_101dafca;
    }
    edx = t10;
    t11 = rd32(COW_IMG(0x10663468u));
    wr8(t11 + 0x70u, 0u);
    wr8(t11 + 0x71u, 0u);
    g->eax = t11;
    g->esp = sp0 - 4u;
    t12 = cow_fastcall(g, COW_IMG(0x101dc880u), rd32(COW_IMG(0x10663468u)), edx, 2, arg1, 0u);
    return (t12 & 0xffffff00u) | 1u;
L_101dafca: ;
    g->eax = eax;
    g->edx = edx;
    t13 = rd32(COW_IMG(0x105782b4u));
    g->esp = sp0 - 8u;
    t14 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t15 = g->edx;
    if (rd32(t13 + 0x18u) < t14)
    {
        eax = t14;
        ecx = rd32(t13 + 0x18u);
        edx = t15;
        goto L_101dafe2;
    }
    eax = t14;
    return eax & 0xffffff00u;
L_101dafe2: ;
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        goto L_101daff5;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_stdcall(g, COW_IMG(0x100ec470u), 0);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 != 0u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        goto L_101daff5;
    }
    eax = t16;
    return eax;
L_101daff5: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t19 = cow_stdcall(g, COW_IMG(0x100f0c50u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_101db03c;
    }
    eax = t19;
    ecx = t20;
    edx = t21;
    g->edi = arg1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t22 = cow_call_regs(g, COW_IMG(0x10097b40u), eax, g->ecx, g->edx, 1, 0);
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        goto L_101db03c;
    }
    eax = t22;
    ecx = t23;
    edx = t24;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t25 = cow_stdcall(g, COW_IMG(0x101cc0a0u), 0);
    t26 = g->ecx;
    t27 = g->edx;
    if ((uint8_t)t25 == 0u)
    {
        eax = t25;
        ecx = t26;
        edx = t27;
        goto L_101db03c;
    }
    eax = t25;
    ecx = t26;
    edx = t27;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100a1860u), 1, 0x2eu);
    t28 = g->ecx;
    t29 = g->edx;
    t30 = rd32(COW_IMG(0x10663468u));
    wr8(t30 + 0x70u, 1u);
    wr8(t30 + 0x71u, (uint8_t)arg3);
    g->eax = t30;
    t31 = cow_fastcall(g, COW_IMG(0x101dc880u), rd32(COW_IMG(0x10663468u)), t29, 2, arg1, 0u);
    g->edi = in_edi;
    return (t31 & 0xffffff00u) | 1u;
L_101db03c: ;
    if ((uint8_t)arg3 != 1u) goto L_101db070;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t32 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 1u);
    t33 = g->edx;
    if ((uint8_t)t32 == 0u)
    {
        edx = t33;
        goto L_101db070;
    }
    edx = t33;
    t34 = rd32(COW_IMG(0x10663468u));
    wr8(t34 + 0x70u, 1u);
    wr8(t34 + 0x71u, 1u);
    g->eax = t34;
    g->esp = sp0 - 4u;
    t35 = cow_fastcall(g, COW_IMG(0x101dc880u), rd32(COW_IMG(0x10663468u)), edx, 2, arg1, 0u);
    g->edi = in_edi;
    return (t35 & 0xffffff00u) | 1u;
L_101db070: ;
    t36 = rd32(COW_IMG(0x10663468u));
    wr8(t36 + 0x70u, 0u);
    wr8(t36 + 0x71u, 0u);
    g->eax = t36;
    g->esp = sp0 - 4u;
    t37 = cow_fastcall(g, COW_IMG(0x101dc880u), rd32(COW_IMG(0x10663468u)), edx, 2, arg1, 0u);
    g->edi = in_edi;
    return (t37 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101daf70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101daf70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
