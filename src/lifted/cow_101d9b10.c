/* f_0x101d9b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101d9b10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr32(self, COW_IMG(0x10338ba0u));
    if (rd32(COW_IMG(0x10663404u)) != 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            wr32(COW_IMG(0x10663404u), 0u);
        }
        else
        {
            edx = t5;
            esi = t3;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t6 = g->ecx;
            t7 = g->edx;
            wr32(esi, COW_IMG(0x10338b58u));
            wr32(COW_IMG(0x10663404u), esi);
            ecx = t6;
            edx = t7;
        }
    }
    if (rd32(COW_IMG(0x10663408u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t8 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
        t9 = g->ecx;
        t10 = g->edx;
        if (t8 == 0u)
        {
            ecx = t9;
            edx = t10;
            wr32(COW_IMG(0x10663408u), 0u);
        }
        else
        {
            edx = t10;
            esi = t8;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t11 = g->ecx;
            t12 = g->edx;
            wr32(esi, COW_IMG(0x10338b10u));
            wr32(COW_IMG(0x10663408u), esi);
            ecx = t11;
            edx = t12;
        }
    }
    if (rd32(COW_IMG(0x1066340cu)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t13 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
        t14 = g->ecx;
        t15 = g->edx;
        if (t13 == 0u)
        {
            ecx = t14;
            edx = t15;
            wr32(COW_IMG(0x1066340cu), 0u);
        }
        else
        {
            edx = t15;
            esi = t13;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t16 = g->ecx;
            t17 = g->edx;
            wr32(esi, COW_IMG(0x10338ac8u));
            wr32(COW_IMG(0x1066340cu), esi);
            ecx = t16;
            edx = t17;
        }
    }
    if (rd32(COW_IMG(0x10663410u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t18 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
        t19 = g->ecx;
        t20 = g->edx;
        if (t18 == 0u)
        {
            ecx = t19;
            edx = t20;
            wr32(COW_IMG(0x10663410u), 0u);
        }
        else
        {
            edx = t20;
            esi = t18;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t21 = g->ecx;
            t22 = g->edx;
            wr32(esi, COW_IMG(0x10338a80u));
            wr32(COW_IMG(0x10663410u), esi);
            ecx = t21;
            edx = t22;
        }
    }
    if (rd32(COW_IMG(0x10663414u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t23 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
        t24 = g->ecx;
        t25 = g->edx;
        if (t23 == 0u)
        {
            ecx = t24;
            edx = t25;
            wr32(COW_IMG(0x10663414u), 0u);
        }
        else
        {
            edx = t25;
            esi = t23;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t26 = g->ecx;
            t27 = g->edx;
            wr32(esi, COW_IMG(0x10338a38u));
            wr32(COW_IMG(0x10663414u), esi);
            ecx = t26;
            edx = t27;
        }
    }
    if (rd32(COW_IMG(0x10663418u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t28 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
        t29 = g->ecx;
        t30 = g->edx;
        if (t28 == 0u)
        {
            ecx = t29;
            edx = t30;
            wr32(COW_IMG(0x10663418u), 0u);
        }
        else
        {
            edx = t30;
            esi = t28;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t31 = g->ecx;
            t32 = g->edx;
            wr32(esi, COW_IMG(0x103389f0u));
            wr32(COW_IMG(0x10663418u), esi);
            ecx = t31;
            edx = t32;
        }
    }
    if (rd32(COW_IMG(0x1066341cu)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t33 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
        t34 = g->ecx;
        t35 = g->edx;
        if (t33 == 0u)
        {
            ecx = t34;
            edx = t35;
            wr32(COW_IMG(0x1066341cu), 0u);
        }
        else
        {
            edx = t35;
            esi = t33;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t36 = g->ecx;
            t37 = g->edx;
            wr32(esi, COW_IMG(0x103389a8u));
            wr32(COW_IMG(0x1066341cu), esi);
            ecx = t36;
            edx = t37;
        }
    }
    if (rd32(COW_IMG(0x10663420u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t38 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
        t39 = g->ecx;
        t40 = g->edx;
        if (t38 == 0u)
        {
            ecx = t39;
            edx = t40;
            wr32(COW_IMG(0x10663420u), 0u);
        }
        else
        {
            edx = t40;
            esi = t38;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x101d9e90u), esi, 0);
            t41 = g->ecx;
            t42 = g->edx;
            wr32(esi, COW_IMG(0x10338960u));
            wr32(COW_IMG(0x10663420u), esi);
            ecx = t41;
            edx = t42;
        }
    }
    if (rd32(COW_IMG(0x10663424u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t43 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
        t44 = g->ecx;
        t45 = g->edx;
        if (t43 == 0u)
        {
            ecx = t44;
            edx = t45;
            wr32(COW_IMG(0x10663424u), 0u);
        }
        else
        {
            edx = t45;
            esi = t43;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x101d9e90u), esi, 0);
            t46 = g->ecx;
            t47 = g->edx;
            wr32(esi, COW_IMG(0x10338918u));
            wr32(COW_IMG(0x10663424u), esi);
            ecx = t46;
            edx = t47;
        }
    }
    if (rd32(COW_IMG(0x10663428u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t48 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x8ccu, in_edi, in_esi);
        t49 = g->ecx;
        t50 = g->edx;
        if (t48 == 0u)
        {
            ecx = t49;
            edx = t50;
            wr32(COW_IMG(0x10663428u), 0u);
        }
        else
        {
            eax = t48;
            edx = t50;
            g->edi = 0u;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t51 = cow_thiscall(g, COW_IMG(0x101d7c10u), eax, 0);
            t52 = g->ecx;
            t53 = g->edx;
            wr32(COW_IMG(0x10663428u), t51);
            ecx = t52;
            edx = t53;
        }
    }
    if (rd32(COW_IMG(0x1066342cu)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t54 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x8a0u, in_edi, in_esi);
        t55 = g->ecx;
        t56 = g->edx;
        if (t54 == 0u)
        {
            ecx = t55;
            edx = t56;
            wr32(COW_IMG(0x1066342cu), 0u);
        }
        else
        {
            eax = t54;
            edx = t56;
            g->edi = 0u;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t57 = cow_thiscall(g, COW_IMG(0x101d87a0u), eax, 0);
            t58 = g->ecx;
            t59 = g->edx;
            wr32(COW_IMG(0x1066342cu), t57);
            ecx = t58;
            edx = t59;
        }
    }
    if (rd32(COW_IMG(0x10663430u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t60 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x1cu, in_edi, in_esi);
        t61 = g->ecx;
        t62 = g->edx;
        if (t60 == 0u)
        {
            ecx = t61;
            edx = t62;
            wr32(COW_IMG(0x10663430u), 0u);
        }
        else
        {
            edx = t62;
            esi = t60;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x101d9e90u), esi, 0);
            t63 = g->ecx;
            t64 = g->edx;
            wr32(esi, COW_IMG(0x103388d0u));
            wr32(esi + 0x18u, 0u);
            wr32(COW_IMG(0x10663430u), esi);
            ecx = t63;
            edx = t64;
        }
    }
    if (rd32(COW_IMG(0x10663434u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t65 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
        t66 = g->ecx;
        t67 = g->edx;
        if (t65 == 0u)
        {
            ecx = t66;
            edx = t67;
            wr32(COW_IMG(0x10663434u), 0u);
        }
        else
        {
            edx = t67;
            esi = t65;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t68 = g->ecx;
            t69 = g->edx;
            wr32(esi, COW_IMG(0x10338888u));
            wr32(COW_IMG(0x10663434u), esi);
            ecx = t68;
            edx = t69;
        }
    }
    if (rd32(COW_IMG(0x10663438u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t70 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
        t71 = g->ecx;
        t72 = g->edx;
        if (t70 == 0u)
        {
            ecx = t71;
            edx = t72;
            wr32(COW_IMG(0x10663438u), 0u);
        }
        else
        {
            edx = t72;
            esi = t70;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x101d9e90u), esi, 0);
            t73 = g->ecx;
            t74 = g->edx;
            wr32(esi, COW_IMG(0x10338840u));
            wr32(COW_IMG(0x10663438u), esi);
            ecx = t73;
            edx = t74;
        }
    }
    if (rd32(COW_IMG(0x1066343cu)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t75 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
        t76 = g->ecx;
        t77 = g->edx;
        if (t75 == 0u)
        {
            ecx = t76;
            edx = t77;
            wr32(COW_IMG(0x1066343cu), 0u);
        }
        else
        {
            edx = t77;
            esi = t75;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x101d9e90u), esi, 0);
            t78 = g->ecx;
            t79 = g->edx;
            wr32(esi, COW_IMG(0x103387f8u));
            wr32(COW_IMG(0x1066343cu), esi);
            ecx = t78;
            edx = t79;
        }
    }
    if (rd32(COW_IMG(0x10663440u)) != 0u) goto L_101d9e54;
    g->esp = sp0 - 4u;
    t80 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 8u, in_edi, in_esi);
    if (t80 == 0u) goto L_101d9e4e;
    eax = t80;
    wr32(eax, COW_IMG(0x10338790u));
    wr32(COW_IMG(0x10663440u), eax);
    g->edi = in_edi;
    return self;
L_101d9e4e: ;
    wr32(COW_IMG(0x10663440u), 0u);
L_101d9e54: ;
    g->edi = in_edi;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d9b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d9b10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
