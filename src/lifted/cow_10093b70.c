/* f_0x10093b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10093b70(Guest* g)
{
    uint32_t eax;
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
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(COW_IMG(0x1046393cu)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1046393cu));
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_stdcall(g, COW_IMG(0x10246810u), 1, 0xffffffffu);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, COW_IMG(0x101578f0u), ecx, 0);
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
    }
    if (rd32(COW_IMG(0x106631d4u)) != 0u)
    {
        esi = rd32(COW_IMG(0x106631d4u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t6 = cow_thiscall(g, COW_IMG(0x101d2f00u), esi, 0);
        t7 = g->ecx;
        t8 = g->edx;
        g->ecx = t7;
        g->edx = t8;
        cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(COW_IMG(0x106631d4u), 0u);
        ecx = t9;
        edx = t10;
    }
    if (rd32(COW_IMG(0x106631d8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106631d8u));
    }
    else
    {
        eax = rd32(COW_IMG(0x106631d8u));
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t11 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(COW_IMG(0x106631d8u), 0u);
        eax = t11;
        ecx = t12;
        edx = t13;
    }
    g->esp = sp0 - 0xcu;
    t14 = cow_call_regs(g, COW_IMG(0x100c3190u), eax, ecx, edx, 1, 0);
    t15 = g->edx;
    t16 = cow_fastcall(g, COW_IMG(0x100c3220u), t14, t15, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if (rd8(COW_IMG(0x10487e48u)) == 0u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    else
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        g->ebx = 0u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t19 = cow_stdcall(g, COW_IMG(0x100ae3f0u), 0);
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
    }
    if (rd8(COW_IMG(0x104807f3u)) != 0u)
    {
        wr8(COW_IMG(0x104807f3u), 3u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t22 = cow_call_regs(g, COW_IMG(0x1008abe0u), eax, g->ecx, g->edx, 1, 0);
        t23 = g->ecx;
        t24 = g->edx;
        eax = t22;
        ecx = t23;
        edx = t24;
    }
    if (rd8(COW_IMG(0x10482f1eu)) != 0u)
    {
        wr8(COW_IMG(0x10482f1eu), 3u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t25 = cow_call_regs(g, COW_IMG(0x1008abe0u), eax, g->ecx, g->edx, 1, 0);
        t26 = g->edx;
        eax = t25;
        edx = t26;
    }
    wr32(COW_IMG(0x1047d3f0u), 0u);
    g->esp = sp0 - 0xcu;
    t27 = cow_call_regs(g, COW_IMG(0x1015eea0u), eax, COW_IMG(0x10621838u), edx, 0, 1, 1u);
    t28 = g->edx;
    eax = t27;
    edx = t28;
    esi = COW_IMG(0x10480af0u);
L_10093c25: ;
    if (rd32(esi) != 0u)
    {
        edi = rd32(esi);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t29 = cow_call_regs(g, COW_IMG(0x1008a7b0u), eax, edi, g->edx, 1, 0);
        t30 = g->ecx;
        t31 = g->edx;
        g->edx = t31;
        t32 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, edi);
        t33 = g->edx;
        wr32(esi, 0u);
        eax = t32;
        edx = t33;
    }
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x10482ef4u))
    {
        esi = esi + 4u;
        goto L_10093c25;
    }
    if (rd32(COW_IMG(0x1046393cu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1046393cu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x1046393cu));
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_stdcall(g, COW_IMG(0x10246810u), 1, 0xffffffffu);
        t34 = g->ecx;
        t35 = g->edx;
        ecx = t34;
        edx = t35;
    }
    g->eax = rd32(COW_IMG(0x10487e6cu));
    t36 = rd32(COW_IMG(0x10487e6cu));
    g->esp = sp0 - 4u;
    t37 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t36);
    t38 = g->edx;
    t39 = rd32(COW_IMG(0x10487e68u));
    wr32(COW_IMG(0x10487e6cu), 0u);
    g->esp = sp0 - 8u;
    t40 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t39, t38, 1, 1, t39);
    t41 = g->ecx;
    t42 = rd32(COW_IMG(0x10487e64u));
    wr32(COW_IMG(0x10487e68u), 0u);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t41, t42, 1, 1, t42);
    t43 = g->ecx;
    t44 = g->edx;
    t45 = rd32(COW_IMG(0x10487e84u));
    wr32(COW_IMG(0x10487e64u), 0u);
    g->eax = t45;
    g->esp = sp0 - 0x10u;
    t46 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t43, t44, 1, 1, t45);
    t47 = g->edx;
    t48 = rd32(COW_IMG(0x10487e60u));
    wr32(COW_IMG(0x10487e84u), 0u);
    wr32(COW_IMG(0x10487e88u), 0u);
    g->esp = sp0 - 0x14u;
    t49 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t48, t47, 1, 1, t48);
    t50 = g->ecx;
    t51 = rd32(COW_IMG(0x10487e58u));
    wr32(COW_IMG(0x10487e60u), 0u);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t50, t51, 1, 1, t51);
    t52 = g->ecx;
    t53 = g->edx;
    t54 = rd32(COW_IMG(0x10487e5cu));
    wr32(COW_IMG(0x10487e58u), 0u);
    g->eax = t54;
    g->esp = sp0 - 0x1cu;
    t55 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t52, t53, 1, 1, t54);
    t56 = g->ecx;
    t57 = g->edx;
    wr32(COW_IMG(0x10487e5cu), 0u);
    g->esp = sp0 - 4u;
    t58 = cow_call_regs(g, COW_IMG(0x100c3190u), t55, t56, t57, 1, 0);
    t59 = g->edx;
    t60 = cow_fastcall(g, COW_IMG(0x100c3220u), t58, t59, 0);
    t61 = g->edx;
    t62 = rd32(COW_IMG(0x10487e70u));
    t63 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t62, t61, 1, 1, t62);
    t64 = g->ecx;
    t65 = rd32(COW_IMG(0x10487e74u));
    wr32(COW_IMG(0x10487e70u), 0u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t64, t65, 1, 1, t65);
    t66 = g->ecx;
    t67 = g->edx;
    t68 = rd32(COW_IMG(0x10487e78u));
    wr32(COW_IMG(0x10487e74u), 0u);
    g->eax = t68;
    g->esp = sp0 - 0xcu;
    t69 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t66, t67, 1, 1, t68);
    t70 = g->edx;
    t71 = rd32(COW_IMG(0x10487e7cu));
    wr32(COW_IMG(0x10487e78u), 0u);
    g->esp = sp0 - 0x10u;
    t72 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t71, t70, 1, 1, t71);
    t73 = g->ecx;
    t74 = rd32(COW_IMG(0x10487e80u));
    wr32(COW_IMG(0x10487e7cu), 0u);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t73, t74, 1, 1, t74);
    t75 = g->ecx;
    t76 = g->edx;
    t77 = rd32(COW_IMG(0x10487edcu));
    wr32(COW_IMG(0x10487e80u), 0u);
    g->eax = t77;
    g->esp = sp0 - 0x18u;
    t78 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t75, t76, 1, 1, t77);
    t79 = g->edx;
    t80 = rd32(COW_IMG(0x10487ee0u));
    wr32(COW_IMG(0x10487edcu), 0u);
    g->esp = sp0 - 0x1cu;
    t81 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t80, t79, 1, 1, t80);
    t82 = g->ecx;
    t83 = rd32(COW_IMG(0x10487ee4u));
    wr32(COW_IMG(0x10487ee0u), 0u);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t82, t83, 1, 1, t83);
    t84 = g->ecx;
    t85 = g->edx;
    t86 = rd32(COW_IMG(0x10487ee8u));
    wr32(COW_IMG(0x10487ee4u), 0u);
    g->eax = t86;
    g->esp = sp0 - 0x24u;
    t87 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t84, t85, 1, 1, t86);
    wr32(COW_IMG(0x10487ee8u), 0u);
    wr8(COW_IMG(0x1048098cu), 0u);
    wr32(COW_IMG(0x10480ae8u), 0u);
    g->ebx = in_ebx;
    return (t87 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10093b70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10093b70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
