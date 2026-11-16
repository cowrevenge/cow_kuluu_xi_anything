/* f_0x101f17c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101f17c0(Guest* g)
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edi = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101f67c0u), self, 1, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self, COW_IMG(0x1033a5d8u));
    wr16(self + 0x50u, 0u);
    wr16(self + 0x52u, 0u);
    wr32(self + 0x58u, 0u);
    wr8(self + 0x88u, 0u);
    wr32(self + 0x8cu, 0u);
    wr8(self + 0x89u, 0u);
    if (rd32(COW_IMG(0x10663744u)) != 0u)
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
        t3 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x18u, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            wr32(COW_IMG(0x10663744u), 0u);
        }
        else
        {
            eax = t3;
            edx = t5;
            esi = t3;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t6 = g->ecx;
            t7 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x1033a590u));
            wr32(COW_IMG(0x10663744u), esi);
            ecx = t6;
            edx = t7;
        }
    }
    if (rd32(COW_IMG(0x10663748u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t8 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x1cu, in_edi, in_esi);
        t9 = g->ecx;
        t10 = g->edx;
        if (t8 == 0u)
        {
            ecx = t9;
            edx = t10;
            wr32(COW_IMG(0x10663748u), 0u);
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
            wr32(esi, COW_IMG(0x1033a548u));
            wr32(COW_IMG(0x10663748u), esi);
            ecx = t11;
            edx = t12;
        }
    }
    if (rd32(COW_IMG(0x1066374cu)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t13 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x1cu, in_edi, in_esi);
        t14 = g->ecx;
        t15 = g->edx;
        if (t13 == 0u)
        {
            ecx = t14;
            edx = t15;
            wr32(COW_IMG(0x1066374cu), 0u);
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
            wr32(esi, COW_IMG(0x1033a548u));
            wr32(COW_IMG(0x1066374cu), esi);
            ecx = t16;
            edx = t17;
        }
    }
    if (rd32(COW_IMG(0x10663750u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t18 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x18u, in_edi, in_esi);
        t19 = g->ecx;
        t20 = g->edx;
        if (t18 == 0u)
        {
            ecx = t19;
            edx = t20;
            wr32(COW_IMG(0x10663750u), 0u);
        }
        else
        {
            eax = t18;
            edx = t20;
            esi = t18;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t21 = g->ecx;
            t22 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x1033a500u));
            wr32(COW_IMG(0x10663750u), esi);
            ecx = t21;
            edx = t22;
        }
    }
    wr8(self + 0x91u, 0u);
    wr8(self + 0x92u, 0u);
    if (rd32(COW_IMG(0x10663754u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t23 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 4u, in_edi, in_esi);
        t24 = g->ecx;
        t25 = g->edx;
        if (t23 == 0u)
        {
            ecx = t24;
            edx = t25;
            wr32(COW_IMG(0x10663754u), 0u);
        }
        else
        {
            eax = t23;
            ecx = t24;
            edx = t25;
            wr32(eax, COW_IMG(0x1033a498u));
            wr32(COW_IMG(0x10663754u), eax);
        }
    }
    if (rd32(COW_IMG(0x10663758u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t26 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 4u, in_edi, in_esi);
        t27 = g->ecx;
        t28 = g->edx;
        if (t26 == 0u)
        {
            ecx = t27;
            edx = t28;
            wr32(COW_IMG(0x10663758u), 0u);
        }
        else
        {
            eax = t26;
            ecx = t27;
            edx = t28;
            wr32(eax, COW_IMG(0x1033a430u));
            wr32(COW_IMG(0x10663758u), eax);
        }
    }
    if (rd32(COW_IMG(0x1066375cu)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t29 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 8u, in_edi, in_esi);
        t30 = g->ecx;
        t31 = g->edx;
        if (t29 == 0u)
        {
            ecx = t30;
            edx = t31;
            wr32(COW_IMG(0x1066375cu), 0u);
        }
        else
        {
            eax = t29;
            ecx = t30;
            edx = t31;
            wr32(eax, COW_IMG(0x1033a3c8u));
            wr32(COW_IMG(0x1066375cu), eax);
        }
    }
    if (rd32(COW_IMG(0x10663760u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t32 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 4u, in_edi, in_esi);
        t33 = g->ecx;
        t34 = g->edx;
        if (t32 == 0u)
        {
            ecx = t33;
            edx = t34;
            wr32(COW_IMG(0x10663760u), 0u);
        }
        else
        {
            eax = t32;
            ecx = t33;
            edx = t34;
            wr32(eax, COW_IMG(0x1033a360u));
            wr32(COW_IMG(0x10663760u), eax);
        }
    }
    if (rd32(COW_IMG(0x10663764u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t35 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 4u, in_edi, in_esi);
        t36 = g->ecx;
        t37 = g->edx;
        if (t35 == 0u)
        {
            ecx = t36;
            edx = t37;
            wr32(COW_IMG(0x10663764u), 0u);
        }
        else
        {
            eax = t35;
            ecx = t36;
            edx = t37;
            wr32(eax, COW_IMG(0x1033a2f8u));
            wr32(COW_IMG(0x10663764u), eax);
        }
    }
    if (rd32(COW_IMG(0x10663768u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t38 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 4u, in_edi, in_esi);
        t39 = g->ecx;
        t40 = g->edx;
        if (t38 == 0u)
        {
            ecx = t39;
            edx = t40;
            wr32(COW_IMG(0x10663768u), 0u);
        }
        else
        {
            eax = t38;
            ecx = t39;
            edx = t40;
            wr32(eax, COW_IMG(0x1033a290u));
            wr32(COW_IMG(0x10663768u), eax);
        }
    }
    if (rd32(COW_IMG(0x1066376cu)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t41 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 4u, in_edi, in_esi);
        t42 = g->ecx;
        t43 = g->edx;
        if (t41 == 0u)
        {
            ecx = t42;
            edx = t43;
            wr32(COW_IMG(0x1066376cu), 0u);
        }
        else
        {
            eax = t41;
            ecx = t42;
            edx = t43;
            wr32(eax, COW_IMG(0x1033a228u));
            wr32(COW_IMG(0x1066376cu), eax);
        }
    }
    if (rd32(COW_IMG(0x10663770u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t44 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 4u, in_edi, in_esi);
        t45 = g->ecx;
        t46 = g->edx;
        if (t44 == 0u)
        {
            ecx = t45;
            edx = t46;
            wr32(COW_IMG(0x10663770u), 0u);
        }
        else
        {
            eax = t44;
            ecx = t45;
            edx = t46;
            wr32(eax, COW_IMG(0x1033a1c0u));
            wr32(COW_IMG(0x10663770u), eax);
        }
    }
    if (rd32(COW_IMG(0x10663774u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t47 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 4u, in_edi, in_esi);
        t48 = g->ecx;
        t49 = g->edx;
        if (t47 == 0u)
        {
            ecx = t48;
            edx = t49;
            wr32(COW_IMG(0x10663774u), 0u);
        }
        else
        {
            eax = t47;
            ecx = t48;
            edx = t49;
            wr32(eax, COW_IMG(0x1033a158u));
            wr32(COW_IMG(0x10663774u), eax);
        }
    }
    if (rd32(COW_IMG(0x10663778u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t50 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 4u, in_edi, in_esi);
        t51 = g->ecx;
        t52 = g->edx;
        if (t50 == 0u)
        {
            ecx = t51;
            edx = t52;
            wr32(COW_IMG(0x10663778u), 0u);
        }
        else
        {
            eax = t50;
            ecx = t51;
            edx = t52;
            wr32(eax, COW_IMG(0x1033a0f0u));
            wr32(COW_IMG(0x10663778u), eax);
        }
    }
    if (rd32(COW_IMG(0x106634c0u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t53 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 4u, in_edi, in_esi);
        t54 = g->ecx;
        t55 = g->edx;
        if (t53 == 0u)
        {
            ecx = t54;
            edx = t55;
            wr32(COW_IMG(0x106634c0u), 0u);
        }
        else
        {
            eax = t53;
            ecx = t54;
            edx = t55;
            wr32(eax, COW_IMG(0x1033a088u));
            wr32(COW_IMG(0x106634c0u), eax);
        }
    }
    if (rd32(COW_IMG(0x106634c4u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t56 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x5cu, in_edi, in_esi);
        t57 = g->ecx;
        t58 = g->edx;
        if (t56 == 0u)
        {
            ecx = t57;
            edx = t58;
            wr32(COW_IMG(0x106634c4u), 0u);
        }
        else
        {
            eax = t56;
            edx = t58;
            g->edi = self;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t59 = cow_thiscall(g, COW_IMG(0x101e2b10u), eax, 0);
            t60 = g->ecx;
            t61 = g->edx;
            wr32(COW_IMG(0x106634c4u), t59);
            ecx = t60;
            edx = t61;
        }
    }
    if (rd32(COW_IMG(0x1066377cu)) == 0u)
    {
        g->esp = sp0 - 4u;
        t62 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x48u, in_edi, in_esi);
        if (t62 == 0u)
        {
            wr32(COW_IMG(0x1066377cu), 0u);
        }
        else
        {
            eax = t62;
            edx = t62;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x101efea0u), edx, 0);
            t63 = g->edx;
            wr32(COW_IMG(0x1066377cu), t63);
        }
    }
    wr8(self + 0x90u, 0u);
    wr32(self + 0x94u, 0u);
    wr32(self + 0x98u, 0x12u);
    g->edi = in_edi;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f17c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f17c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
