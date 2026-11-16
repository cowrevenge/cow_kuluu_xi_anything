/* f_0x101f3e60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101f3e60(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u) goto L_101f3eb6;
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101f3e75;
    }
    eax = eax - 1u;
    if (eax != 2u)
    {
        eax = eax - 2u;
        edx = in_edx;
        goto L_101f3eb2;
    }
    eax = eax - 2u;
L_101f3e75: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10371620u));
    t1 = g->edx;
    t2 = rd32(rd32(COW_IMG(0x10663748u)) + 8u);
    cow_call_regs(g, COW_IMG(0x1015e530u), rd32(COW_IMG(0x10663748u)), COW_IMG(0x10621838u), g->edx, 0, 1, t2);
    t3 = rd32(rd32(COW_IMG(0x10663748u)) + 8u);
    g->eax = t3;
    t4 = rd32(COW_IMG(0x10663748u));
    t5 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t4, 2, t3, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10037e90u), t6, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_101f3eb2: ;
    g->edx = edx;
    return eax;
L_101f3eb6: ;
    t10 = rd32(sp0 + 8u);
    g->esp = sp0 - 0xcu;
    t11 = cow_stdcall(g, COW_IMG(0x101f3f80u), 1, t10);
    wr8(rd32(COW_IMG(0x10663740u)) + 0x91u, 1u);
    g->eax = rd32(COW_IMG(0x10663740u));
    g->edx = rd32(rd32(self + 0x14u));
    t12 = rd32(COW_IMG(0x10663740u));
    t13 = rd32(rd32(self + 0x14u));
    t14 = rd32(rd32(COW_IMG(0x10663740u)) + 0x64u);
    t15 = cow_thiscall(g, rd32(t13 + 0x54u), rd32(self + 0x14u), 0);
    t16 = g->edx;
    if (t15 != t14)
    {
        eax = t15;
        edx = t16;
        ebx = t14;
        edi = t11;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t22 = cow_fastcall(g, COW_IMG(0x101dc880u), rd32(COW_IMG(0x10663468u)), edx, 2, edi, 0u);
        t23 = g->edx;
        eax = t22;
        edx = t23;
        ebx = ebx & 0xffffff00u;
    }
    else
    {
        edx = t16;
        ebx = t14;
        edi = t11;
        g->eax = rd32(rd32(COW_IMG(0x1066346cu)));
        g->edx = edx;
        t17 = rd32(rd32(COW_IMG(0x1066346cu)));
        g->esp = sp0 - 0xcu;
        t18 = cow_thiscall(g, rd32(t17 + 0x58u), rd32(COW_IMG(0x1066346cu)), 1, edi);
        t19 = g->edx;
        g->edx = t19;
        t20 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, rd32(COW_IMG(0x1066346cu)));
        t21 = g->edx;
        eax = t20;
        edx = t21;
        ebx = (ebx & 0xffffff00u) | 1u;
    }
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10371620u));
    t24 = rd32(rd32(COW_IMG(0x10663748u)) + 8u);
    g->ebx = ebx;
    g->edx = rd32(COW_IMG(0x10663748u));
    t25 = rd32(COW_IMG(0x10663748u));
    t26 = cow_call_regs(g, COW_IMG(0x1015e530u), t24, COW_IMG(0x10621838u), g->edx, 0, 1, t24);
    t27 = g->edx;
    wr32(sp0 + 8u, 0u);
    if ((uint8_t)ebx == 0u)
    {
        edx = t27;
        goto L_101f3f62;
    }
    eax = t26;
    t28 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    wr32(sp0 + 4u, t28);
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = t28;
    return cow_tailcall(g, COW_IMG(0x1015db80u), eax, COW_IMG(0x10621838u), t28);
L_101f3f62: ;
    t29 = rd32(rd32(COW_IMG(0x10663468u)) + 8u);
    t30 = rd32(COW_IMG(0x10663468u));
    wr32(sp0 + 4u, t29);
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t30, COW_IMG(0x10621838u), edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f3e60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f3e60(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
