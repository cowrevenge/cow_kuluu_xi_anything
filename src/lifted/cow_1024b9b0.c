/* f_0x1024b9b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1024b9b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    wr32(self, 1u);
    wr32(self + 8u, 0u);
    wr32(COW_IMG(0x1066910cu), 0u);
    wr32(COW_IMG(0x106690c0u), 0u);
    wr32(self + 4u, 0u);
    wr32(COW_IMG(0x106690b4u), 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(COW_IMG(0x10329184u)), self, 1, COW_IMG(0x106690ccu));
    t1 = g->ecx;
    t2 = g->edx;
    wr32(COW_IMG(0x106690ecu), 0u);
    wr32(COW_IMG(0x106690e4u), 0xffffffffu);
    wr32(COW_IMG(0x106690f8u), 0u);
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t1, t2, 1, 3, 0x1314u, in_edi, in_esi);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        ecx = t4;
        edx = t5;
        wr32(COW_IMG(0x106690c8u), 0u);
    }
    else
    {
        eax = t3;
        wr32(eax, 0x14u);
        edx = eax + 0x8cu;
        esi = 0x14u;
        edi = eax + 4u;
L_1024ba21: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t6 = cow_thiscall(g, COW_IMG(0x10246970u), edx, 0);
        t7 = g->ecx;
        t8 = g->edx;
        if (esi != 1u)
        {
            eax = t6;
            edx = t8 + 0xf4u;
            esi = esi - 1u;
            goto L_1024ba21;
        }
        ecx = t7;
        edx = t8 + 0xf4u;
        wr32(COW_IMG(0x106690c8u), edi);
    }
    g->esp = sp0 - 0xcu;
    t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x544u, in_edi, in_esi);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        ecx = t10;
        edx = t11;
        wr32(COW_IMG(0x106690b8u), 0u);
    }
    else
    {
        eax = t9;
        wr32(eax, 3u);
        edx = eax + 0x5cu;
        esi = 3u;
        edi = eax + 4u;
L_1024ba61: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t12 = cow_thiscall(g, COW_IMG(0x10246970u), edx, 0);
        t13 = g->ecx;
        t14 = g->edx;
        if (esi != 1u)
        {
            eax = t12;
            edx = t14 + 0x1c0u;
            esi = esi - 1u;
            goto L_1024ba61;
        }
        ecx = t13;
        edx = t14 + 0x1c0u;
        wr32(COW_IMG(0x106690b8u), edi);
    }
    g->esp = sp0 - 0xcu;
    t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x2000u, in_edi, in_esi);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(COW_IMG(0x106690e8u), t15);
    g->esp = sp0 - 0x10u;
    t18 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t16, t17, 1, 3, 0x1000u, 0x2000u, in_edi);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(COW_IMG(0x106690bcu), t18);
    g->esp = sp0 - 0x14u;
    t21 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t19, t20, 1, 3, 0x108u, 0x1000u, 0x2000u);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(COW_IMG(0x106690fcu), t21);
    g->esp = sp0 - 0x18u;
    t24 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t22, t23, 1, 3, 0x1080u, 0x108u, 0x1000u);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(COW_IMG(0x10669100u), t24);
    g->esp = sp0 - 0x1cu;
    t27 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t25, t26, 1, 3, 0x1080u, 0x1080u, 0x108u);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(COW_IMG(0x10669108u), t27);
    g->esp = sp0 - 0x20u;
    t30 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t28, t29, 1, 3, 0x10u, 0x1080u, 0x1080u);
    t31 = g->ecx;
    t32 = g->edx;
    t33 = rd32(COW_IMG(0x106690c8u));
    wr32(COW_IMG(0x10669104u), t30);
    if (t33 == 0u)
    {
        ecx = t31;
        goto L_1024bbd3;
    }
    eax = t30;
    ecx = t31;
    edx = t32;
    edi = t33;
    if (rd32(COW_IMG(0x106690b8u)) == 0u) goto L_1024bbd3;
    if (rd32(COW_IMG(0x106690e8u)) == 0u) goto L_1024bbd3;
    if (rd32(COW_IMG(0x106690bcu)) == 0u) goto L_1024bbd3;
    if (rd32(COW_IMG(0x106690fcu)) == 0u) goto L_1024bbd3;
    if (rd32(COW_IMG(0x10669100u)) == 0u) goto L_1024bbd3;
    if (rd32(COW_IMG(0x10669108u)) == 0u) goto L_1024bbd3;
    if (eax == 0u) goto L_1024bbd3;
    eax = 0u;
    ecx = 0x4c4u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = rd32(COW_IMG(0x106690b8u));
    ecx = 0x150u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(rd32(COW_IMG(0x106690b8u)) + 0x94u, 0xffffffffu);
    wr32(rd32(COW_IMG(0x106690b8u)) + 0x254u, 0xffffffffu);
    edi = rd32(COW_IMG(0x106690e8u));
    eax = 0u;
    ecx = 0x800u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t34 = rd32(COW_IMG(0x106690e8u));
    t35 = rd32(COW_IMG(0x106690bcu));
    wr32(COW_IMG(0x106690c4u), t34);
    wr32(COW_IMG(0x106690f0u), t34);
    edi = t35;
    eax = 0u;
    ecx = 0x400u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = rd32(COW_IMG(0x106690fcu));
    ecx = 0x42u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = rd32(COW_IMG(0x10669108u));
    ecx = 0x420u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = rd32(COW_IMG(0x10669100u));
    ecx = 0x420u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t36 = rd32(COW_IMG(0x10669104u));
    wr32(t36, 0xffffffffu);
    wr32(t36 + 4u, 0xffffffffu);
    wr32(t36 + 8u, 0xffffffffu);
    wr32(t36 + 0xcu, 0xffffffffu);
    return self;
L_1024bbd3: ;
    wr32(self, 0u);
    if (rd32(COW_IMG(0x106690c8u)) != 0u)
    {
        edx = rd32(COW_IMG(0x106690c8u));
        if ((int32_t)(rd32(edx - 4u) - 1u) < 0)
        {
            eax = rd32(edx - 4u) - 1u;
            ecx = edx + rd32(edx - 4u) * 0xf4u;
            ebx = edx - 4u;
        }
        else
        {
            eax = rd32(edx - 4u) - 1u;
            ecx = edx + rd32(edx - 4u) * 0xf4u;
            ebx = edx - 4u;
            esi = ecx + 0x88u;
            edi = eax + 1u;
L_1024bbfd: ;
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t37 = cow_fastcall(g, COW_IMG(0x102469b0u), esi - 0xf4u, edx, 0);
            t38 = g->ecx;
            t39 = g->edx;
            if (edi != 1u)
            {
                eax = t37;
                edx = t39;
                esi = esi - 0xf4u;
                edi = edi - 1u;
                goto L_1024bbfd;
            }
            eax = t37;
            ecx = t38;
            edx = t39;
        }
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebx);
        t40 = g->ecx;
        wr32(COW_IMG(0x106690c8u), 0u);
        ecx = t40;
    }
    if (rd32(COW_IMG(0x106690b8u)) == 0u)
    {
        edx = rd32(COW_IMG(0x106690b8u));
    }
    else
    {
        edx = rd32(COW_IMG(0x106690b8u));
        if ((int32_t)(rd32(edx - 4u) - 1u) < 0)
        {
            eax = edx + rd32(edx - 4u) * 0x1c0u;
            ecx = rd32(edx - 4u) - 1u;
            ebx = edx - 4u;
        }
        else
        {
            eax = edx + rd32(edx - 4u) * 0x1c0u;
            ecx = rd32(edx - 4u) - 1u;
            ebx = edx - 4u;
            esi = eax + 0x58u;
            edi = ecx + 1u;
L_1024bc47: ;
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t41 = cow_fastcall(g, COW_IMG(0x102469b0u), esi - 0x1c0u, edx, 0);
            t42 = g->ecx;
            t43 = g->edx;
            if (edi != 1u)
            {
                eax = t41;
                edx = t43;
                esi = esi - 0x1c0u;
                edi = edi - 1u;
                goto L_1024bc47;
            }
            eax = t41;
            ecx = t42;
            edx = t43;
        }
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebx);
        t44 = g->ecx;
        t45 = g->edx;
        wr32(COW_IMG(0x106690b8u), 0u);
        ecx = t44;
        edx = t45;
    }
    if (rd32(COW_IMG(0x106690e8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106690e8u));
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t46 = g->ecx;
        t47 = g->edx;
        wr32(COW_IMG(0x106690e8u), 0u);
        ecx = t46;
        edx = t47;
    }
    if (rd32(COW_IMG(0x106690bcu)) != 0u)
    {
        eax = rd32(COW_IMG(0x106690bcu));
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t48 = g->ecx;
        t49 = g->edx;
        wr32(COW_IMG(0x106690bcu), 0u);
        ecx = t48;
        edx = t49;
    }
    if (rd32(COW_IMG(0x106690fcu)) != 0u)
    {
        eax = rd32(COW_IMG(0x106690fcu));
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t50 = g->ecx;
        t51 = g->edx;
        wr32(COW_IMG(0x106690fcu), 0u);
        ecx = t50;
        edx = t51;
    }
    if (rd32(COW_IMG(0x10669108u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10669108u));
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t52 = g->ecx;
        t53 = g->edx;
        wr32(COW_IMG(0x10669108u), 0u);
        ecx = t52;
        edx = t53;
    }
    if (rd32(COW_IMG(0x10669100u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10669100u));
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t54 = g->ecx;
        t55 = g->edx;
        wr32(COW_IMG(0x10669100u), 0u);
        ecx = t54;
        edx = t55;
    }
    if (rd32(COW_IMG(0x10669104u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10669104u));
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        wr32(COW_IMG(0x10669104u), 0u);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024b9b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024b9b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
