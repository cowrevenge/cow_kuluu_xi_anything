/* f_0x100e0430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e0430(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    if (rd16(arg1 + 0x40da8u) == rd16(arg3 + 0xeu))
    {
        eax = (in_eax & 0xffff0000u) | rd16(arg1 + 0x40da8u);
        edx = in_edx;
    }
    else
    {
        edi = sp0 - 0x54u;
        eax = 0u;
        ecx = 0x15u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t1 = rd8(arg3 + 0x20u);
        wr16(sp0 - 0x4cu, 0x5du);
        t2 = rd32(arg3 + 8u);
        wr32(sp0 - 0x44u, t2);
        t3 = rd16(arg1 + ((eax & 0xffffff00u) | t1) * 0x30u + 0x3aeb0u);
        wr32(sp0 - 0x48u, t3);
        ecx = ((eax & 0xffffff00u) | t1) * 0x30u;
        eax = arg3 + 0x10u;
L_100e0486: ;
        t4 = rd8(eax);
        wr8(eax + sp0 - arg3 - 0x44u, (uint8_t)t4);
        if ((uint8_t)t4 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t4;
            goto L_100e0486;
        }
        eax = eax + 1u;
        wr32(sp0 - 0x64u, sp0 - 0x54u);
        g->ebx = arg1;
        g->eax = eax;
        g->edx = sp0 - 0x34u - (arg3 + 0x10u);
        g->esp = sp0 - 0x60u;
        t5 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    if (rd16(arg1 + 0x3bde4u) != rd16(arg3 + 0xeu))
    {
        edx = (edx & 0xffff0000u) | rd16(arg1 + 0x3bde4u);
    }
    else
    {
        t7 = rd32(arg1 + rd8(arg3 + 0x20u) * 0x30u + 0x3aeb4u) - rd32(arg3 + 8u);
        wr32(arg1 + rd8(arg3 + 0x20u) * 0x30u + 0x3aeb4u, t7);
        if (rd32(arg1 + rd8(arg3 + 0x20u) * 0x30u + 0x3aeb4u) != 0u)
        {
            eax = rd32(arg1 + rd8(arg3 + 0x20u) * 0x30u + 0x3aeb4u);
            edx = arg1 + rd8(arg3 + 0x20u) * 0x30u;
        }
        else
        {
            edx = arg1 + rd8(arg3 + 0x20u) * 0x30u;
            edi = edx + 0x3aeb0u;
            eax = 0u;
            ecx = 0xcu;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        }
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e0430(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
