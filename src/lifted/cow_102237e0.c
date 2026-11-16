/* f_0x102237e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
uint32_t cow_fn_102237e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(arg6, 0u);
    wr8(arg2, 0u);
    wr8(arg3, 0u);
    wr8(arg4, 0u);
    wr16(arg5, 0u);
    wr8(arg7, 0u);
    wr8(arg8, 0u);
    g->eax = arg7;
    g->edx = arg5;
    g->esp = sp0 - 0x34u;
    t1 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        wr32(sp0 - 0x38u, arg1);
        g->eax = eax;
        g->edx = arg1;
        g->esp = sp0 - 0x34u;
        t3 = cow_thiscall(g, COW_IMG(0x10224160u), rd32(COW_IMG(0x10667148u)), 1, arg1);
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            eax = t3;
            t5 = rd8(eax + 0x11u);
            wr32(sp0 - 0x28u, t5);
            t6 = rd8(eax + 0x12u);
            wr32(sp0 - 0x24u, t6);
            wr32(sp0 - 0x38u, sp0 - 0x28u);
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x1cu, 0x20u);
            t7 = rd8(eax + 0x13u);
            wr32(sp0 - 0x18u, t7);
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x10u, 0u);
            wr8(sp0 - 0xcu, 0u);
            wr8(sp0 - 0xbu, 0u);
            wr8(sp0 - 0xau, 0u);
            wr8(sp0 - 9u, 0u);
            wr8(sp0 - 8u, 0u);
            wr8(sp0 - 7u, 0u);
            wr8(sp0 - 6u, 0u);
            wr8(sp0 - 5u, 0u);
            wr8(sp0 - 4u, 0u);
            wr8(sp0 - 3u, 0u);
            wr8(sp0 - 2u, 0u);
            wr8(sp0 - 1u, 0u);
            g->ebx = 0u;
            g->esp = sp0 - 0x24u;
            cow_call_regs(g, COW_IMG(0x1022d370u), g->eax, t7, sp0 - 0x28u, 1, 5, sp0 - 0x28u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), t5);
            t8 = g->ecx;
            t9 = g->edx;
            wr32(sp0 - 0x3cu, sp0 - 0x28u);
            g->esp = sp0 - 0x28u;
            cow_call_regs(g, COW_IMG(0x1022d510u), sp0 - 0x28u, t8, t9, 1, 5, sp0 - 0x28u, sp0 - 0x28u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
            wr32(sp0 - 0x40u, arg8);
            wr32(sp0 - 0x44u, arg7);
            wr32(sp0 - 0x48u, arg6);
            wr32(sp0 - 0x4cu, arg5);
            wr32(sp0 - 0x50u, arg4);
            wr32(sp0 - 0x54u, arg3);
            wr32(sp0 - 0x58u, arg2);
            wr32(sp0 - 0x5cu, sp0 - 0x28u);
            g->eax = sp0 - 0x28u;
            g->edx = arg3;
            g->esp = sp0 - 0x3cu;
            t10 = cow_thiscall_cdecl(g, COW_IMG(0x1022d290u), arg4, 8, sp0 - 0x28u, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102237e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102237e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
