/* f_0x101eaec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101eaec0(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x100e78d0u), 1, arg3);
    t2 = g->ecx;
    t3 = g->edx;
    wr16(arg2 + 0x32u, (uint16_t)t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x18u;
    t4 = cow_cdecl(g, COW_IMG(0x100e78a0u), 1, arg3);
    t5 = g->ecx;
    t6 = g->edx;
    wr16(arg2 + 0x34u, (uint16_t)t4);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x1cu;
    t7 = cow_call_regs(g, COW_IMG(0x100e7900u), t4, g->ecx, g->edx, 1, 1, arg3);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_101eaf22;
    }
    edx = t9;
    t10 = rd16(arg2 + 0x34u);
    g->eax = t10;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t11 = cow_thiscall(g, COW_IMG(0x100db7b0u), rd32(COW_IMG(0x103601bcu)), 1, t10);
    t12 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t12, 4, 5u, 0x24u, t11, 0x80808080u);
    wr8(arg2, 6u);
    return;
L_101eaf22: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t13 = cow_cdecl(g, COW_IMG(0x100e79a0u), 1, arg3);
    t14 = g->edx;
    esi = arg3 + 0xb0u;
    edi = arg2 + 0x38u;
    ecx = 0x12u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((uint8_t)t13 != 0u)
    {
        eax = t13;
        ecx = rd32(COW_IMG(0x104dfd98u));
        edx = t14;
        goto L_101eafc6;
    }
    eax = t13;
    ecx = rd32(COW_IMG(0x104dfd98u));
    edx = t14;
    if (ecx != 0u)
    {
        if (rd32(ecx + 0x3c350u) == rd16(arg2 + 0x60u))
        {
            eax = rd16(arg2 + 0x60u);
            edx = rd32(ecx + 0x3c350u);
        }
        else
        {
            eax = rd16(arg2 + 0x60u);
            edx = rd32(ecx + 0x3c350u);
            g->ebx = arg2;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t15 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, eax, 0u, 0x80808080u, in_edi);
            t16 = g->edx;
            g->esp = sp0 - 0x14u;
            t17 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t16, 4, 5u, 0x23u, t15, 0x80808080u);
            t18 = g->ecx;
            t19 = g->edx;
            eax = t17;
            ecx = t18;
            edx = t19;
        }
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t20 = cow_cdecl(g, COW_IMG(0x100e7950u), 1, arg3);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 != 0u)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t23 = cow_cdecl(g, COW_IMG(0x100e7950u), 1, arg3);
        wr32(arg2 + 0x3cu, rd32(t23));
        t24 = rd32(t23 + 4u);
        wr32(arg2 + 0x40u, t24);
        t25 = rd32(t23 + 8u);
        wr32(arg2 + 0x44u, t25);
        t26 = rd32(t23 + 0xcu);
        wr32(arg2 + 0x48u, t26);
        cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, arg2 + 0x3cu, 4, 4u, 0x25u, arg2 + 0x3cu, 0x80808080u);
    }
    wr8(arg2, 5u);
    g->ebx = in_ebx;
    return;
L_101eafc6: ;
    if (ecx != 0u)
    {
        if (rd32(ecx + 0x3c350u) == rd16(arg2 + 0x60u))
        {
            eax = rd16(arg2 + 0x60u);
            edx = rd32(ecx + 0x3c350u);
        }
        else
        {
            eax = rd16(arg2 + 0x60u);
            edx = rd32(ecx + 0x3c350u);
            g->ebx = arg2;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t27 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, eax, 0u, 0x80808080u, in_edi);
            t28 = g->edx;
            g->esp = sp0 - 0x14u;
            t29 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t28, 4, 5u, 0x23u, t27, 0x80808080u);
            t30 = g->edx;
            eax = t29;
            edx = t30;
        }
    }
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, edx, 4, 4u, 0x25u, arg2 + 0x3cu, 0x80808080u);
    t31 = rd32(arg2 + 0x68u);
    wr8(arg2, 5u);
    if ((t31 >> 8u & 0x40u) != 0u)
    {
        t32 = rd32(self + 0x80u);
        g->esp = sp0 - 0x14u;
        cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, self, 4, 0u, 0xeu, t32, 0x80808080u);
    }
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eaec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101eaec0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
