/* f_0x101e97c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_101e97c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    if ((int32_t)arg3 < 0)
    {
        eax = arg3;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        if ((int32_t)arg3 >= 3)
        {
            eax = arg3;
            ecx = self;
            edx = in_edx;
        }
        else
        {
            wr32(sp0 - 0x30u, 0u);
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0x80808080u);
            wr32(sp0 - 0x3cu, arg2);
            wr32(sp0 - 0x40u, arg1);
            g->eax = arg3;
            g->edx = in_edx;
            t1 = rd32(arg3 * 4u + self + 0x18u);
            g->esp = sp0 - 0x2cu;
            t2 = cow_thiscall(g, COW_IMG(0x1011fb60u), t1, 5, arg1, arg2, 0x80808080u, 0u, 0u);
            t3 = g->ecx;
            t4 = g->edx;
            eax = t2;
            ecx = t3;
            edx = t4;
        }
    }
    wr32(sp0 - 0x30u, 0x80808080u);
    wr32(sp0 - 0x34u, 0x59u);
    wr32(sp0 - 0x38u, 0xcu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x59u);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x34u, t5);
    wr32(sp0 - 0x38u, arg2 + 0xdu);
    wr32(sp0 - 0x3cu, arg1 + 8u);
    g->edx = t7;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, arg1 + 8u, arg2 + 0xdu, t5, 0x80808080u, in_edi, in_esi, in_ebx, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t8 = g->edx;
    wr32(sp0 - 0x40u, arg4);
    wr32(sp0 - 0x44u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x48u, sp0 - 0x20u);
    g->ebx = self;
    g->ecx = sp0 - 0x20u;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), arg4, arg1 + 8u, arg2 + 0xdu);
    t9 = g->ecx;
    wr32(sp0 - 0x4cu, 0x3f800000u);
    wr32(sp0 - 0x50u, 0x3f800000u);
    wr32(sp0 - 0x54u, 1u);
    wr32(sp0 - 0x58u, 0x80808080u);
    wr32(sp0 - 0x5cu, sp0 - 0x20u);
    wr32(sp0 - 0x60u, arg2 + 0xdu);
    wr32(sp0 - 0x64u, arg1 + 0x2cu);
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x48u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t9, 7, arg1 + 0x2cu, arg2 + 0xdu, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t10 = g->edx;
    if ((int32_t)arg5 >= 0)
    {
        edx = t10;
        if ((int32_t)arg5 < 6)
        {
            wr32(sp0 - 0x30u, 0u);
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0x80808080u);
            wr32(sp0 - 0x3cu, arg2 + 0x1au);
            wr32(sp0 - 0x40u, arg1 + 8u);
            g->esp = sp0 - 0x2cu;
            cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(arg5 * 4u + self + 0x24u), 5, arg1 + 8u, arg2 + 0x1au, 0x80808080u, 0u, 0u);
        }
    }
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e97c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e97c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
