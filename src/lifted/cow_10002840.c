/* f_0x10002840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10002840(Guest* g)
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
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 344u);

    wr32(sp0 - 0x11cu, in_ebp);
    wr32(sp0 - 0x120u, in_esi);
    wr32(sp0 - 0x124u, in_edi);
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x128u, sp0 - 0x118u);
    wr32(sp0 - 0x12cu, COW_IMG(0x1034f47cu));
    wr32(sp0 - 0x130u, sp0 - 0x100u);
    wr32(sp0 - 0x118u, 0x100u);
    g->edx = self;
    g->esp = sp0 - 0x124u;
    t1 = cow_thiscall(g, COW_IMG(0x10018fc0u), self + 0x8cu, 3, sp0 - 0x100u, COW_IMG(0x1034f47cu), sp0 - 0x118u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        edx = t3;
        wr32(sp0 - 0x128u, arg1);
        wr32(sp0 - 0x12cu, 0u);
        wr32(sp0 - 0x130u, 0u);
        t5 = rd32(COW_IMG(0x10455c20u));
        g->esp = sp0 - 0x124u;
        t6 = cow_call_regs(g, COW_IMG(0x10005490u), eax, t5, edx, 0, 3, 0u, 0u, arg1);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0x128u, COW_IMG(0x1034f430u));
        g->esp = sp0 - 0x128u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    }
    else
    {
        eax = t1;
        ecx = t2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        wr32(sp0 - 0x12cu, COW_IMG(0x1034f450u));
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x12cu;
        cow_stdcall(g, COW_IMG(0x10017d40u), 0);
        t4 = g->edx;
        wr32(sp0 - 0x128u, arg1);
        wr32(sp0 - 0x12cu, 0x100u);
        wr32(sp0 - 0x130u, sp0 - 0x100u);
        g->esp = sp0 - 0x124u;
        cow_call_regs(g, COW_IMG(0x10005490u), 0x100u, rd32(COW_IMG(0x10455c20u)), t4, 0, 3, sp0 - 0x100u, 0x100u, arg1);
    }
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x128u, sp0 - 0x118u);
    wr32(sp0 - 0x12cu, COW_IMG(0x1034f424u));
    wr32(sp0 - 0x130u, sp0 - 0x100u);
    wr32(sp0 - 0x118u, 0x100u);
    g->edx = sp0 - 0x118u;
    g->esp = sp0 - 0x124u;
    t9 = cow_thiscall(g, COW_IMG(0x10018fc0u), self + 0x8cu, 3, sp0 - 0x100u, COW_IMG(0x1034f424u), sp0 - 0x118u);
    t10 = g->edx;
    if ((uint8_t)t9 != 1u)
    {
        eax = t9;
        edx = t10;
        goto L_10002936;
    }
    eax = t9;
    edx = t10;
    if (rd8(COW_IMG(0x10455c34u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c34u));
        goto L_10002936;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c34u));
    wr32(sp0 - 0x128u, sp0 - 0x100u);
    wr32(sp0 - 0x12cu, COW_IMG(0x1034f3f8u));
    g->esp = sp0 - 0x12cu;
    cow_stdcall(g, COW_IMG(0x10017d40u), 0);
    wr32(sp0 - 0x128u, 0x100u);
    wr32(sp0 - 0x12cu, sp0 - 0x100u);
    g->ebp = arg1;
    g->esp = sp0 - 0x124u;
    cow_stdcall(g, COW_IMG(0x10005130u), 2, sp0 - 0x100u, 0x100u);
L_10002952: ;
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x118u, 0x100u);
    wr32(sp0 - 0x128u, sp0 - 0x118u);
    wr32(sp0 - 0x12cu, COW_IMG(0x1034f3d0u));
    wr32(sp0 - 0x130u, sp0 - 0x100u);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x124u;
    t15 = cow_thiscall(g, COW_IMG(0x10018fc0u), self + 0x8cu, 3, sp0 - 0x100u, COW_IMG(0x1034f3d0u), sp0 - 0x118u);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 != 1u)
    {
        eax = t15;
        edx = t17;
        goto L_100029b3;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    if (rd8(COW_IMG(0x10455c34u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c34u));
        goto L_100029b3;
    }
    wr32(sp0 - 0x128u, sp0 - 0x100u);
    wr32(sp0 - 0x12cu, COW_IMG(0x1034f3a0u));
    g->eax = sp0 - 0x100u;
    g->esp = sp0 - 0x12cu;
    t18 = cow_stdcall(g, COW_IMG(0x10017d40u), 0);
    wr32(sp0 - 0x128u, 0x100u);
    wr32(sp0 - 0x12cu, sp0 - 0x100u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x10005320u), t18, g->ecx, g->edx, 0, 2, sp0 - 0x100u, 0x100u);
L_100029cf: ;
    wr32(sp0 - 0x110u, rd32(COW_IMG(0x1034a11cu)));
    wr32(sp0 - 0x114u, rd32(COW_IMG(0x1034a118u)));
    wr32(sp0 - 0x128u, COW_IMG(0x1034f374u));
    wr32(sp0 - 0x12cu, sp0 - 0x114u);
    wr32(sp0 - 0x10cu, rd32(COW_IMG(0x1034a120u)));
    wr32(sp0 - 0x108u, rd32(COW_IMG(0x1034a124u)));
    t23 = rd32(COW_IMG(0x1034a124u));
    t24 = rd32(COW_IMG(0x1034a11cu));
    t25 = rd32(COW_IMG(0x1034a118u));
    t26 = rd32(COW_IMG(0x1034a120u));
    g->esp = sp0 - 0x124u;
    t27 = cow_thiscall(g, COW_IMG(0x10019060u), self + 0x8cu, 2, sp0 - 0x114u, COW_IMG(0x1034f374u));
    if ((uint8_t)t27 != 1u) goto L_10002ad0;
    eax = t27;
    if (rd8(COW_IMG(0x10455c34u)) == 0u) goto L_10002ad0;
    t28 = (uint8_t)rd32(sp0 - 0x105u);
    wr32(sp0 - 0x128u, t28);
    t29 = (uint8_t)rd32(sp0 - 0x106u);
    wr32(sp0 - 0x12cu, t29);
    t30 = (uint8_t)rd32(sp0 - 0x107u);
    wr32(sp0 - 0x130u, t30);
    t31 = (uint8_t)rd32(sp0 - 0x108u);
    wr32(sp0 - 0x134u, t31);
    t32 = (uint8_t)rd32(sp0 - 0x109u);
    wr32(sp0 - 0x138u, t32);
    t33 = (uint8_t)rd32(sp0 - 0x10au);
    wr32(sp0 - 0x13cu, t33);
    t34 = (uint8_t)rd32(sp0 - 0x10bu);
    wr32(sp0 - 0x140u, t34);
    t35 = (uint8_t)rd32(sp0 - 0x10cu);
    wr32(sp0 - 0x144u, t35);
    t36 = (uint16_t)rd32(sp0 - 0x10eu);
    wr32(sp0 - 0x148u, t36);
    t37 = (uint16_t)rd32(sp0 - 0x110u);
    wr32(sp0 - 0x14cu, t37);
    t38 = rd32(sp0 - 0x114u);
    wr32(sp0 - 0x150u, t38);
    wr32(sp0 - 0x154u, COW_IMG(0x1034f318u));
    g->esp = sp0 - 0x154u;
    cow_stdcall(g, COW_IMG(0x10017d40u), 0);
    wr32(sp0 - 0x128u, arg1);
    t39 = rd32(sp0 - 0x114u);
    wr32(sp0 - 0x138u, t39);
    t40 = rd32(sp0 - 0x110u);
    wr32(sp0 - 0x134u, t40);
    t41 = rd32(sp0 - 0x10cu);
    wr32(sp0 - 0x130u, t41);
    t42 = rd32(sp0 - 0x108u);
    wr32(sp0 - 0x12cu, t42);
    g->esp = sp0 - 0x124u;
    cow_stdcall(g, COW_IMG(0x100055a0u), 5, t39, t40, t41, t42, arg1);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return;
L_10002936: ;
    wr32(sp0 - 0x128u, 0u);
    wr32(sp0 - 0x12cu, 0u);
    g->ebp = arg1;
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x10455c20u));
    g->edx = edx;
    t11 = rd32(COW_IMG(0x10455c20u));
    g->esp = sp0 - 0x124u;
    t12 = cow_stdcall(g, COW_IMG(0x10005130u), 2, 0u, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x128u, COW_IMG(0x1034f3dcu));
    g->esp = sp0 - 0x128u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    goto L_10002952;
L_100029b3: ;
    wr32(sp0 - 0x128u, 0u);
    wr32(sp0 - 0x12cu, 0u);
    g->ecx = rd32(COW_IMG(0x10455c20u));
    g->edx = edx;
    t19 = rd32(COW_IMG(0x10455c20u));
    g->esp = sp0 - 0x124u;
    t20 = cow_call_regs(g, COW_IMG(0x10005320u), eax, g->ecx, g->edx, 0, 2, 0u, 0u);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0x128u, COW_IMG(0x1034f380u));
    g->esp = sp0 - 0x128u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    goto L_100029cf;
L_10002ad0: ;
    wr32(sp0 - 0x128u, arg1);
    t43 = rd32(sp0 - 0x114u);
    wr32(sp0 - 0x138u, t43);
    t44 = rd32(sp0 - 0x110u);
    wr32(sp0 - 0x134u, t44);
    t45 = rd32(sp0 - 0x10cu);
    wr32(sp0 - 0x130u, t45);
    t46 = rd32(sp0 - 0x108u);
    wr32(sp0 - 0x12cu, t46);
    g->eax = t46;
    g->ecx = rd32(COW_IMG(0x10455c20u));
    g->edx = t45;
    t47 = rd32(COW_IMG(0x10455c20u));
    g->esp = sp0 - 0x124u;
    t48 = cow_stdcall(g, COW_IMG(0x100055a0u), 5, t43, t44, t45, t46, arg1);
    t49 = g->ecx;
    t50 = g->edx;
    wr32(sp0 - 0x128u, COW_IMG(0x1034f2f8u));
    g->esp = sp0 - 0x128u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10002840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10002840(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
