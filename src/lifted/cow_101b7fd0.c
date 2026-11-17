/* f_0x101b7fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101b7fd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 2524u);

    wr32(sp0 - 0x9acu, in_ebx);
    wr32(sp0 - 0x9b0u, in_ebp);
    wr32(sp0 - 0x9b4u, in_esi);
    wr32(sp0 - 0x9b8u, in_edi);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0x998u, 0u);
    wr16(sp0 - 0x996u, 0u);
    wr16(sp0 - 0x994u, 0u);
    wr16(sp0 - 0x992u, 0u);
    if (t1 == 0u)
    {
        ecx = t1;
        wr32(sp0 - 0x9bcu, COW_IMG(0x1037c8b0u));
        g->esp = sp0 - 0x9bcu;
        cow_stdcall(g, COW_IMG(0x101908d0u), 0);
        ebp = 0x64u;
        edi = 0x64u;
    }
    else
    {
        ecx = t1;
        wr32(sp0 - 0x9bcu, sp0 - 0x998u);
        g->esp = sp0 - 0x9b8u;
        cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x998u, ecx, g->edx, 0, 1, sp0 - 0x998u);
        ebp = (uint32_t)(int16_t)rd16(sp0 - 0x996u) + 3u;
        edi = (uint32_t)(int16_t)rd16(sp0 - 0x998u) + 2u;
    }
    wr32(sp0 - 0x9bcu, 0x168u);
    wr32(sp0 - 0x9c0u, sp0 - 0x968u);
    wr8(rd32(self + 0x1cu) + 0xf11du, 0u);
    g->eax = sp0 - 0x968u;
    g->esp = sp0 - 0x9b8u;
    t2 = cow_thiscall(g, rd32(rd32(rd32(self + 0x1cu)) + 0x10u), rd32(self + 0x1cu), 2, sp0 - 0x968u, 0x168u);
    t3 = rd32(self + 0x20u);
    wr8(sp0 - 0x9a8u, 0u);
    if ((int32_t)t3 < 25)
    {
        eax = t3;
        ebx = t2;
        if ((int32_t)eax >= 10)
        {
            wr8(sp0 - 0x9a8u, 1u);
        }
        wr32(self + 0x20u, eax + 1u);
    }
    else
    {
        ebx = t2;
        wr32(self + 0x20u, 0u);
    }
    t4 = rd32(sp0 - 0x9a8u);
    wr32(sp0 - 0x9bcu, t4);
    t5 = rd32(self + 0x34u);
    wr32(sp0 - 0x9c0u, t5);
    wr32(sp0 - 0x9c4u, ebp);
    wr32(sp0 - 0x9c8u, edi);
    wr32(sp0 - 0x9ccu, ebx);
    wr32(sp0 - 0x9d0u, sp0 - 0x968u);
    g->eax = sp0 - 0x968u;
    g->edx = t5;
    g->esp = sp0 - 0x9b8u;
    t6 = cow_thiscall(g, COW_IMG(0x101b8660u), self, 6, sp0 - 0x968u, ebx, edi, ebp, t5, t4);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x9bcu, 0x80808080u);
    g->esp = sp0 - 0x9bcu;
    t9 = cow_stdcall(g, COW_IMG(0x10190810u), 0);
    wr32(sp0 - 0x9bcu, ebx);
    wr32(sp0 - 0x9c0u, sp0 - 0x968u);
    wr32(sp0 - 0x9c4u, 0x20u);
    wr32(sp0 - 0x9c8u, sp0 - 0x988u);
    g->edx = sp0 - 0x988u;
    g->esp = sp0 - 0x9b8u;
    cow_call_regs(g, COW_IMG(0x101b8d70u), t9, g->ecx, g->edx, 0, 4, sp0 - 0x988u, 0x20u, sp0 - 0x968u, ebx);
    t10 = g->edx;
    wr32(sp0 - 0x9bcu, sp0 - 0x988u);
    g->eax = sp0 - 0x988u;
    g->edx = t10;
    t11 = cow_stdcall(g, COW_IMG(0x101b8c80u), 1, sp0 - 0x988u);
    t12 = g->edx;
    if (t11 == rd32(self + 0x2cu))
    {
        edx = t12;
    }
    else
    {
        eax = rd32(self + 0x2cu);
        edx = t12;
        edi = t11;
        wr32(sp0 - 0x9bcu, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x9b8u;
        t13 = cow_thiscall(g, COW_IMG(0x101b8cb0u), self, 1, eax);
        t14 = g->edx;
        wr32(sp0 - 0x9bcu, edi);
        g->edx = t14;
        cow_thiscall(g, COW_IMG(0x101b8cc0u), self, 1, edi);
        t15 = g->edx;
        wr32(self + 0x2cu, edi);
        edx = t15;
    }
    if (rd32(self + 0x30u) == 0u)
    {
        eax = rd32(self + 0x30u);
        goto L_101b8288;
    }
    eax = rd32(self + 0x30u);
    wr16(sp0 - 0x9a4u, 0u);
    wr32(sp0 - 0x9bcu, sp0 - 0x9a4u);
    t16 = rd32(self + 8u);
    wr16(sp0 - 0x9a2u, 0u);
    wr16(sp0 - 0x9a0u, 0u);
    wr16(sp0 - 0x99eu, 0u);
    g->esp = sp0 - 0x9b8u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, t16, g->edx, 0, 1, sp0 - 0x9a4u);
    wr32(sp0 - 0x9bcu, 0u);
    wr32(sp0 - 0x9c0u, 0u);
    wr32(sp0 - 0x9c4u, 0x80808080u);
    t17 = (uint32_t)(int16_t)rd16(sp0 - 0x9a2u) - 0xcu;
    wr32(sp0 - 0x9c8u, t17);
    t18 = (uint32_t)(int16_t)rd16(sp0 - 0x9a4u);
    wr32(sp0 - 0x9ccu, t18);
    g->eax = t18;
    g->edx = t17;
    t19 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x30u), 5, t18, t17, 0x80808080u, 0u, 0u);
    t20 = g->edx;
    if (rd32(self + 0x2cu) != 0xbu)
    {
        eax = t19;
        edx = t20;
    }
    else
    {
        eax = t19;
        edx = t20;
        wr32(sp0 - 0x9bcu, sp0 - 0x99cu);
        wr32(sp0 - 0x9c0u, 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x9b8u;
        t21 = cow_thiscall_cdecl(g, COW_IMG(0x100a3740u), sp0 - 0x99cu, 2, 1u, sp0 - 0x99cu);
        t22 = g->edx;
        if (t21 == 0u)
        {
            eax = t21;
            edx = t22;
        }
        else
        {
            eax = t21;
            t23 = rd32(sp0 - 0x99cu);
            wr32(sp0 - 0x9bcu, t23);
            wr32(sp0 - 0x9c0u, eax);
            t24 = rd32(sp0 - 0x9a2u) - 0xcu;
            wr32(sp0 - 0x9c4u, t24);
            t25 = rd32(sp0 - 0x9a4u) + 0x42u;
            wr32(sp0 - 0x9c8u, t25);
            g->eax = t24;
            g->edx = t23;
            g->esp = sp0 - 0x9a4u;
            t26 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t25, t24, eax, t23, rd32(sp0 - 0x9b8u), rd32(sp0 - 0x9b4u), rd32(sp0 - 0x9b0u), rd32(sp0 - 0x9acu), rd32(sp0 - 0x9a8u));
            t27 = g->edx;
            eax = t26;
            edx = t27;
        }
    }
    if (rd32(self + 0x2cu) == 6u)
    {
        esi = rd32(self + 0x2cu);
        goto L_101b8165;
    }
    esi = rd32(self + 0x2cu);
    if (esi == 0xcu) goto L_101b8165;
    if (esi != 0xdu) goto L_101b8288;
L_101b8165: ;
    wr8(sp0 - 0x9a8u, 1u);
    if (esi != 0xcu)
    {
        if (esi == 0xdu)
        {
            wr8(sp0 - 0x9a8u, 3u);
        }
    }
    else
    {
        wr8(sp0 - 0x9a8u, 2u);
    }
    wr32(sp0 - 0x9bcu, sp0 - 0x9a8u);
    wr32(sp0 - 0x9c0u, sp0 - 0x990u);
    wr32(sp0 - 0x9c4u, sp0 - 0x98cu);
    wr32(sp0 - 0x9c8u, sp0 - 0x99cu);
    t28 = rd32(sp0 - 0x9a8u);
    wr32(sp0 - 0x9ccu, t28);
    g->eax = t28;
    g->edx = sp0 - 0x99cu;
    g->esp = sp0 - 0x9b8u;
    t29 = cow_cdecl(g, COW_IMG(0x100a3800u), 5, t28, sp0 - 0x99cu, sp0 - 0x98cu, sp0 - 0x990u, sp0 - 0x9a8u);
    t30 = g->edx;
    if (t29 == 0u)
    {
        eax = t29;
        edx = t30;
        goto L_101b8288;
    }
    eax = t29;
    if (rd32(sp0 - 0x99cu) != 0u)
    {
        ecx = rd32(sp0 - 0x99cu);
        goto L_101b81da;
    }
    t31 = rd32(sp0 - 0x9a8u);
    wr32(sp0 - 0x9bcu, t31);
    wr32(sp0 - 0x9c0u, eax);
    t32 = rd32(sp0 - 0x9a2u) - 0xcu;
    wr32(sp0 - 0x9c4u, t32);
    t33 = rd32(sp0 - 0x9a4u) + 0x42u;
    wr32(sp0 - 0x9c8u, t33);
    g->eax = t33;
    g->edx = t32;
    g->esp = sp0 - 0x9a4u;
    t34 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t33, t32, eax, t31, rd32(sp0 - 0x9b8u), rd32(sp0 - 0x9b4u), rd32(sp0 - 0x9b0u), rd32(sp0 - 0x9acu), rd32(sp0 - 0x9a8u));
    t35 = g->edx;
    g->ebx = rd32(sp0 - 0x9acu);
    g->esi = rd32(sp0 - 0x9b4u);
    g->edi = rd32(sp0 - 0x9b8u);
    g->ebp = rd32(sp0 - 0x9b0u);
    g->edx = t35;
    return t34;
L_101b81da: ;
    wr32(sp0 - 0x9bcu, 0u);
    t36 = rd16(ecx + 6u);
    t37 = (rd8(ecx + 7u) & 0xfu) * 0xdu + 0x38u | (t36 >> 4u & 0xfu) * 0xd00u + 0x3800u | ((t36 & 0xfu) * 0xdu << 0x10u) + 0x380000u | 0x80000000u;
    wr32(sp0 - 0x9c0u, t37);
    wr32(sp0 - 0x9c4u, 0u);
    wr32(sp0 - 0x9c8u, 0x3f000000u);
    t38 = rd32(sp0 - 0x9a2u) - 0xeu;
    wr32(sp0 - 0x9ccu, t38);
    t39 = rd32(sp0 - 0x9a4u) + 0x42u;
    wr32(sp0 - 0x9d0u, t39);
    t40 = (uint8_t)rd32(sp0 - 0x98cu);
    wr32(sp0 - 0x9d4u, t40);
    t41 = rd32(sp0 - 0x990u);
    wr32(sp0 - 0x9d8u, t41);
    g->eax = t40;
    g->edx = t39;
    g->esp = sp0 - 0x9d0u;
    t42 = cow_cdecl(g, COW_IMG(0x101cb860u), 2, t41, t40);
    t43 = g->edx;
    wr32(sp0 - 0x9d4u, t42);
    t44 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x9b8u;
    cow_thiscall(g, COW_IMG(0x1015bd70u), t44, 7, t42, rd32(sp0 - 0x9d0u), rd32(sp0 - 0x9ccu), 0x3f000000u, 0u, rd32(sp0 - 0x9c0u), 0u);
    t45 = g->ecx;
    t46 = rd32(sp0 - 0x9a8u);
    wr32(sp0 - 0x9bcu, t46);
    t47 = rd32(sp0 - 0x99cu) + 9u;
    wr32(sp0 - 0x9c0u, t47);
    g->eax = t47;
    g->esp = sp0 - 0x9bcu;
    t48 = cow_thiscall_cdecl(g, COW_IMG(0x101c8fb0u), t45, 1, t47);
    wr32(sp0 - 0x9c0u, t48);
    t49 = rd32(sp0 - 0x9a2u) - 0xcu;
    wr32(sp0 - 0x9c4u, t49);
    t50 = rd32(sp0 - 0x9a4u) + 0x52u;
    wr32(sp0 - 0x9c8u, t50);
    g->edx = t50;
    g->esp = sp0 - 0x9a4u;
    t51 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t50, t49, t48, rd32(sp0 - 0x9bcu), rd32(sp0 - 0x9b8u), rd32(sp0 - 0x9b4u), rd32(sp0 - 0x9b0u), rd32(sp0 - 0x9acu), rd32(sp0 - 0x9a8u));
    t52 = g->edx;
    eax = t51;
    edx = t52;
L_101b8288: ;
    g->ebx = rd32(sp0 - 0x9acu);
    g->esi = rd32(sp0 - 0x9b4u);
    g->edi = rd32(sp0 - 0x9b8u);
    g->ebp = rd32(sp0 - 0x9b0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b7fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b7fd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
