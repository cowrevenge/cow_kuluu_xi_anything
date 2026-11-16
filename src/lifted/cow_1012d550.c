/* f_0x1012d550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012d550(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    wr8(self + 0x14u, 0u);
    wr8(self + 0x15u, 0u);
    if (rd32(COW_IMG(0x104df770u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0;
        t16 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x6b4u, in_edi, in_esi);
        t17 = g->ecx;
        t18 = g->edx;
        if (t16 == 0u)
        {
            ecx = t17;
            edx = t18;
            eax = 0u;
        }
        else
        {
            eax = t16;
            edx = t18;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t19 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 7u, 0x78u, self, COW_IMG(0x1012d440u), COW_IMG(0x103d3c84u), 0x14au, 0xfu, 0x114u);
            t20 = g->ecx;
            t21 = g->edx;
            eax = t19;
            ecx = t20;
            edx = t21;
        }
        wr32(self + 0x138u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t22 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x6b4u, in_edi, in_esi);
        t23 = g->ecx;
        t24 = g->edx;
        if (t22 == 0u)
        {
            ecx = t23;
            edx = t24;
            eax = 0u;
        }
        else
        {
            eax = t22;
            edx = t24;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t25 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 7u, 0x78u, self, COW_IMG(0x1012d440u), COW_IMG(0x1036f660u), 0x14au, 0xfu, 0x114u);
            t26 = g->ecx;
            t27 = g->edx;
            eax = t25;
            ecx = t26;
            edx = t27;
        }
        wr32(self + 0x13cu, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t28 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x6b4u, in_edi, in_esi);
        t29 = g->ecx;
        t30 = g->edx;
        if (t28 == 0u)
        {
            ecx = t29;
            edx = t30;
            eax = 0u;
        }
        else
        {
            eax = t28;
            edx = t30;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t31 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 7u, 0x78u, self, COW_IMG(0x1012d440u), COW_IMG(0x1036f650u), 0x14au, 0xfu, 0x114u);
            t32 = g->ecx;
            t33 = g->edx;
            eax = t31;
            ecx = t32;
            edx = t33;
        }
        wr32(self + 0x140u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t34 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x6b4u, in_edi, in_esi);
        t35 = g->ecx;
        t36 = g->edx;
        if (t34 == 0u)
        {
            ecx = t35;
            eax = 0u;
        }
        else
        {
            eax = t34;
            edx = t36;
            g->eax = eax;
            g->esp = sp0 - 8u;
            t37 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 7u, 0x78u, self, COW_IMG(0x1012d440u), COW_IMG(0x1036f648u), 0x14au, 0xfu, 0x114u);
            t38 = g->ecx;
            eax = t37;
            ecx = t38;
        }
        wr32(self + 0x144u, eax);
        eax = COW_IMG(0x103d3c84u);
L_1012d715: ;
        t39 = rd8(eax);
        wr8(eax + self - COW_IMG(0x103d3c84u) + 0x16u, (uint8_t)t39);
        if ((uint8_t)t39 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t39;
            goto L_1012d715;
        }
        ecx = (ecx & 0xffffff00u) | t39;
        eax = COW_IMG(0x1036f660u);
L_1012d729: ;
        t40 = rd8(eax);
        wr8(eax + self - COW_IMG(0x1036f660u) + 0x36u, (uint8_t)t40);
        if ((uint8_t)t40 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t40;
            goto L_1012d729;
        }
        ecx = (ecx & 0xffffff00u) | t40;
        eax = COW_IMG(0x1036f650u);
L_1012d73d: ;
        t41 = rd8(eax);
        wr8(eax + self - COW_IMG(0x1036f650u) + 0x56u, (uint8_t)t41);
        if ((uint8_t)t41 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t41;
            goto L_1012d73d;
        }
        ecx = (ecx & 0xffffff00u) | t41;
        eax = self + 0x76u;
        edx = self + 0x56u - COW_IMG(0x1036f650u);
        loc_c = COW_IMG(0x1036f648u);
        loc_10 = COW_IMG(0x1034f7e0u);
    }
    else
    {
        eax = rd32(COW_IMG(0x104df770u));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x6b4u, in_edi, in_esi);
        t2 = g->edx;
        if (t1 == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = t1;
            edx = t2;
            t3 = rd32(COW_IMG(0x104df770u)) + 0x14u;
            g->eax = eax;
            g->esp = sp0 - 8u;
            t4 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 7u, 0x78u, self, COW_IMG(0x1012d440u), t3, 0x14au, 0xfu, 0x114u);
            eax = t4;
        }
        wr32(self + 0x138u, eax);
        ecx = rd32(COW_IMG(0x104df770u)) + 0x14u;
        edx = self + 0x16u;
L_1012d5b7: ;
        t5 = rd8(ecx);
        wr8(edx, (uint8_t)t5);
        if ((uint8_t)t5 != 0u)
        {
            eax = (eax & 0xffffff00u) | t5;
            ecx = ecx + 1u;
            edx = edx + 1u;
            goto L_1012d5b7;
        }
        eax = rd32(COW_IMG(0x104df770u));
        ecx = rd32(COW_IMG(0x104df770u)) + 0xc8u;
        edx = self + 0x36u;
L_1012d5cf: ;
        t6 = rd8(ecx);
        wr8(edx, (uint8_t)t6);
        if ((uint8_t)t6 != 0u)
        {
            eax = (eax & 0xffffff00u) | t6;
            ecx = ecx + 1u;
            edx = edx + 1u;
            goto L_1012d5cf;
        }
        eax = (eax & 0xffffff00u) | t6;
        t7 = rd32(rd32(COW_IMG(0x104df770u)) + 8u);
        g->eax = eax;
        t8 = rd32(COW_IMG(0x104df770u));
        g->esp = sp0 - 8u;
        t9 = cow_call_regs(g, COW_IMG(0x100dc3a0u), g->eax, t8, t7, 1, 1, t7);
        t10 = g->ecx;
        eax = t9;
        ecx = t10;
        edx = self + 0x56u;
L_1012d5ee: ;
        t11 = rd8(eax);
        wr8(edx, (uint8_t)t11);
        if ((uint8_t)t11 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t11;
            edx = edx + 1u;
            goto L_1012d5ee;
        }
        ecx = (ecx & 0xffffff00u) | t11;
        edx = edx + 1u;
        t12 = (ecx & 0xffff0000u) | rd16(rd32(COW_IMG(0x104df770u)) + 0x10u);
        g->eax = rd32(COW_IMG(0x104df770u));
        t13 = rd32(COW_IMG(0x104df770u));
        g->esp = sp0 - 8u;
        t14 = cow_thiscall(g, rd32(COW_IMG(0x10329480u)), t12, 1, t12);
        t15 = g->ecx;
        eax = (uint16_t)t14;
        ecx = t15;
        edx = self + 0x76u;
        loc_c = (uint16_t)t14;
        loc_10 = COW_IMG(0x10352ff0u);
    }
    g->ecx = ecx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x76u, loc_10, loc_c, in_edi, in_esi);
    t42 = g->ecx;
    eax = COW_IMG(0x103d3c84u);
    ecx = t42;
L_1012d76a: ;
    t43 = rd8(eax);
    wr8(eax + self - COW_IMG(0x103d3c84u) + 0x96u, (uint8_t)t43);
    if ((uint8_t)t43 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t43;
        goto L_1012d76a;
    }
    ecx = (ecx & 0xffffff00u) | t43;
    eax = COW_IMG(0x103d3c84u);
L_1012d781: ;
    t44 = rd8(eax);
    wr8(eax + self - COW_IMG(0x103d3c84u) + 0xb6u, (uint8_t)t44);
    if ((uint8_t)t44 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t44;
        goto L_1012d781;
    }
    ecx = (ecx & 0xffffff00u) | t44;
    eax = COW_IMG(0x103d3c84u);
L_1012d798: ;
    t45 = rd8(eax);
    wr8(eax + self - COW_IMG(0x103d3c84u) + 0xd6u, (uint8_t)t45);
    if ((uint8_t)t45 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t45;
        goto L_1012d798;
    }
    ecx = (ecx & 0xffffff00u) | t45;
    eax = COW_IMG(0x103d3c84u);
L_1012d7af: ;
    t46 = rd8(eax);
    wr8(eax + self - COW_IMG(0x103d3c84u) + 0xf6u, (uint8_t)t46);
    if ((uint8_t)t46 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t46;
        goto L_1012d7af;
    }
    eax = eax + 1u;
    edx = self + 0xf6u - COW_IMG(0x103d3c84u);
    edi = 0u;
L_1012d7bb: ;
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t47 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, edi + 1u, 0u);
    t48 = g->edx;
    if ((int32_t)(edi + 1u) < 9)
    {
        eax = t47;
        edx = t48;
        edi = edi + 1u;
        goto L_1012d7bb;
    }
    t49 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    g->eax = t49;
    g->edx = rd32(self + 8u);
    t50 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    t51 = cow_thiscall(g, COW_IMG(0x1012db00u), self, 1, t49);
    t52 = g->edx;
    g->edi = in_edi;
    g->edx = t52;
    return t51;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012d550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012d550(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
