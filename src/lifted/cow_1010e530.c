/* f_0x1010e530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1010e530(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        edi = rd32(self);
        t1 = rd32(edi + 0x20u);
        wr32(edi + 8u, COW_IMG(0x10332e88u));
        wr32(t1 + 8u, 0u);
        if (rd8(edi + 0xcu) != 0u)
        {
            eax = (t1 & 0xffffff00u) | rd8(edi + 0xcu);
        }
        else
        {
            if (rd32(edi + 0x18u) == 0u)
            {
                eax = rd32(edi + 0x18u);
                goto L_1010e56e;
            }
            eax = rd32(edi + 0x18u);
L_1010e561: ;
            wr32(eax, 0u);
            if (rd32(eax + 8u) != 0u)
            {
                eax = rd32(eax + 8u);
                goto L_1010e561;
            }
            eax = rd32(eax + 8u);
        }
L_1010e56e: ;
        if (rd32(edi + 0x18u) == 0u)
        {
            ecx = self;
            edx = in_edx;
            goto L_1010e5bb;
        }
        edx = in_edx;
        esi = rd32(edi + 0x18u);
L_1010e578: ;
        t2 = rd32(esi + 8u);
        wr32(esi + 8u, 0u);
        if (rd32(esi) == 0u)
        {
            ebx = t2;
        }
        else
        {
            ebx = t2;
            ebp = rd32(esi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t3 = cow_thiscall(g, COW_IMG(0x1010ea00u), ebp, 0);
            t4 = g->ecx;
            t5 = g->edx;
            t6 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t4, t5, 1, 1, ebp);
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
        t8 = rd32(esi + 8u);
        wr32(esi, 0xefefefefu);
        if (t8 == 0u)
        {
            ecx = t8;
        }
        else
        {
            ecx = t8;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t9 = cow_thiscall(g, COW_IMG(0x1010e370u), ecx, 1, 1u);
            t10 = g->ecx;
            t11 = g->edx;
            eax = t9;
            ecx = t10;
            edx = t11;
        }
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t12 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
        t13 = g->ecx;
        t14 = g->edx;
        if (ebx != 0u)
        {
            eax = t12;
            edx = t14;
            esi = ebx;
            goto L_1010e578;
        }
        ecx = t13;
        edx = t14;
L_1010e5bb: ;
        wr32(edi + 0x18u, edi + 0x1cu);
        wr32(edi + 0x20u, edi + 0x10u);
        wr16(edi + 0xeu, 0u);
        wr32(edi + 0x18u, 0u);
        if (rd32(edi + 0x1cu) == 0u)
        {
            eax = 0u;
            ebp = edi + 0x10u;
            esi = edi + 0x1cu;
        }
        else
        {
            ebx = rd32(edi + 0x1cu);
            ebp = edi + 0x10u;
            esi = edi + 0x1cu;
            g->eax = 0u;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t15 = cow_thiscall(g, COW_IMG(0x1010ea00u), ebx, 0);
            t16 = g->ecx;
            t17 = g->edx;
            t18 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t16, t17, 1, 1, ebx);
            t19 = g->ecx;
            t20 = g->edx;
            eax = t18;
            ecx = t19;
            edx = t20;
        }
        wr32(esi, 0xefefefefu);
        if (rd32(esi + 8u) != 0u)
        {
            esi = rd32(esi + 8u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t21 = cow_thiscall(g, COW_IMG(0x1010e730u), esi, 0);
            t22 = g->ecx;
            t23 = g->edx;
            g->ecx = t22;
            g->edx = t23;
            t24 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
            t25 = g->ecx;
            t26 = g->edx;
            eax = t24;
            ecx = t25;
            edx = t26;
        }
        if (rd32(ebp) != 0u)
        {
            esi = rd32(ebp);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t27 = cow_thiscall(g, COW_IMG(0x1010ea00u), esi, 0);
            t28 = g->ecx;
            t29 = g->edx;
            t30 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t28, t29, 1, 1, esi);
            t31 = g->ecx;
            t32 = g->edx;
            eax = t30;
            ecx = t31;
            edx = t32;
        }
        wr32(ebp, 0xefefefefu);
        if (rd32(ebp + 8u) != 0u)
        {
            ebp = rd32(ebp + 8u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t33 = cow_thiscall(g, COW_IMG(0x1010e730u), ebp, 0);
            t34 = g->ecx;
            t35 = g->edx;
            g->ecx = t34;
            g->edx = t35;
            t36 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, ebp);
            t37 = g->ecx;
            t38 = g->edx;
            eax = t36;
            ecx = t37;
            edx = t38;
        }
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, edi);
        t39 = g->edx;
        edx = t39;
    }
    t40 = rd32(self + 8u);
    wr32(self, 0xefefefefu);
    if (t40 == 0u)
    {
        ecx = t40;
    }
    else
    {
        ecx = t40;
        g->esp = sp0 - 4u;
        cow_fastcall(g, COW_IMG(0x1010e530u), ecx, edx, 1, 1u);
        t41 = g->ecx;
        t42 = g->edx;
        ecx = t41;
        edx = t42;
    }
    if (arg1 & 1u)
    {
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x101086b0u), 1, self);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010e530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010e530(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
