/* f_0x101e3f50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101e3f50(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    g->edi = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101f67c0u), self, 1, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self, COW_IMG(0x103394c0u));
    wr32(self + 0x50u, 0xffffffffu);
    wr32(self + 0x54u, 0u);
    wr32(self + 0x58u, 0u);
    wr8(self + 0x64u, 0u);
    wr8(self + 0x65u, 0u);
    wr32(self + 0x68u, 0u);
    wr32(self + 0x6cu, 0u);
    wr32(self + 0x70u, 0u);
    wr32(self + 0x74u, 0u);
    wr8(self + 0x78u, 0u);
    if (rd32(COW_IMG(0x1066352cu)) != 0u)
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
        t3 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x1cu, in_edi, in_ebp);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            wr32(COW_IMG(0x1066352cu), 0u);
        }
        else
        {
            eax = t3;
            edx = t5;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t6 = cow_thiscall(g, COW_IMG(0x101e5750u), eax, 0);
            t7 = g->ecx;
            t8 = g->edx;
            wr32(COW_IMG(0x1066352cu), t6);
            ecx = t7;
            edx = t8;
        }
    }
    if (rd32(COW_IMG(0x10663528u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t9 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x48u, in_edi, in_ebp);
        t10 = g->ecx;
        t11 = g->edx;
        if (t9 == 0u)
        {
            ecx = t10;
            edx = t11;
            wr32(COW_IMG(0x10663528u), 0u);
        }
        else
        {
            eax = t9;
            edx = t11;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t12 = cow_thiscall(g, COW_IMG(0x101e51b0u), eax, 0);
            t13 = g->ecx;
            t14 = g->edx;
            wr32(COW_IMG(0x10663528u), t12);
            ecx = t13;
            edx = t14;
        }
    }
    if (rd32(COW_IMG(0x10663530u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t15 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_esi, in_edi);
        t16 = g->ecx;
        t17 = g->edx;
        if (t15 == 0u)
        {
            ecx = t16;
            edx = t17;
            wr32(COW_IMG(0x10663530u), 0u);
        }
        else
        {
            eax = t15;
            edx = t17;
            esi = t15;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t18 = g->ecx;
            t19 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339478u));
            wr32(COW_IMG(0x10663530u), esi);
            ecx = t18;
            edx = t19;
        }
    }
    if (rd32(COW_IMG(0x10663534u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t20 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x28u, in_esi, in_edi);
        t21 = g->ecx;
        t22 = g->edx;
        if (t20 == 0u)
        {
            ecx = t21;
            edx = t22;
            wr32(COW_IMG(0x10663534u), 0u);
        }
        else
        {
            edx = t22;
            esi = t20;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x101e5ba0u), esi, 0);
            t23 = g->ecx;
            t24 = g->edx;
            wr32(esi, COW_IMG(0x10339430u));
            wr16(esi + 0x14u, 2u);
            wr8(esi + 0x24u, 1u);
            wr32(COW_IMG(0x10663534u), esi);
            ecx = t23;
            edx = t24;
        }
    }
    if (rd32(COW_IMG(0x10663538u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t25 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x28u, in_esi, in_edi);
        t26 = g->ecx;
        t27 = g->edx;
        if (t25 == 0u)
        {
            ecx = t26;
            edx = t27;
            wr32(COW_IMG(0x10663538u), 0u);
        }
        else
        {
            edx = t27;
            esi = t25;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x101e5ba0u), esi, 0);
            t28 = g->ecx;
            t29 = g->edx;
            wr32(esi, COW_IMG(0x103393e8u));
            wr16(esi + 0x14u, 2u);
            wr8(esi + 0x24u, 1u);
            wr32(COW_IMG(0x10663538u), esi);
            ecx = t28;
            edx = t29;
        }
    }
    if (rd32(COW_IMG(0x1066353cu)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t30 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x28u, in_esi, in_edi);
        t31 = g->ecx;
        t32 = g->edx;
        if (t30 == 0u)
        {
            ecx = t31;
            edx = t32;
            wr32(COW_IMG(0x1066353cu), 0u);
        }
        else
        {
            edx = t32;
            esi = t30;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x101e5ba0u), esi, 0);
            t33 = g->ecx;
            t34 = g->edx;
            wr32(esi, COW_IMG(0x103393a0u));
            wr16(esi + 0x14u, 2u);
            wr32(COW_IMG(0x1066353cu), esi);
            ecx = t33;
            edx = t34;
        }
    }
    if (rd32(COW_IMG(0x10663540u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t35 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x2cu, in_esi, in_edi);
        t36 = g->ecx;
        t37 = g->edx;
        if (t35 == 0u)
        {
            ecx = t36;
            edx = t37;
            wr32(COW_IMG(0x10663540u), 0u);
        }
        else
        {
            edx = t37;
            esi = t35;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x101e5ba0u), esi, 0);
            t38 = g->ecx;
            t39 = g->edx;
            wr32(esi, COW_IMG(0x10339358u));
            wr16(esi + 0x14u, 1u);
            wr32(COW_IMG(0x10663540u), esi);
            ecx = t38;
            edx = t39;
        }
    }
    if (rd32(COW_IMG(0x10663554u)) != 0u) goto L_101e4135;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t40 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_ebp);
    t41 = g->edx;
    if (t40 == 0u) goto L_101e412f;
    eax = t40;
    edx = t41;
    g->esp = sp0 - 0xcu;
    t42 = cow_thiscall(g, COW_IMG(0x101e48f0u), eax, 0);
    wr32(COW_IMG(0x10663554u), t42);
    g->edi = in_edi;
    return self;
L_101e412f: ;
    wr32(COW_IMG(0x10663554u), 0u);
L_101e4135: ;
    g->edi = in_edi;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e3f50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e3f50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
