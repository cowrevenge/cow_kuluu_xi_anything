/* f_0x10108990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10108990(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 + 8u > rd16(self + 8u))
    {
        eax = 0u;
        edx = arg1 + 8u;
        goto L_10108a4a;
    }
    if (rd32(self + 0x10u) == 0u)
    {
        edx = arg1 + 8u;
        esi = rd32(self + 0x10u);
        goto L_10108a48;
    }
    esi = rd32(self + 0x10u);
L_101089b8: ;
    if (rd16(esi + 6u) >= arg1 + 8u) goto L_101089e2;
    eax = rd16(esi + 6u);
    if (rd16(esi + 0xau) == 0u) goto L_101089db;
    eax = (eax & 0xffff0000u) | rd16(esi + 0xau);
    t1 = self + (uint16_t)eax;
    if (self + (uint16_t)eax != 0u)
    {
        esi = t1;
        goto L_101089b8;
    }
    eax = t1;
    g->edx = arg1 + 8u;
    return eax;
L_101089db: ;
    g->edx = arg1 + 8u;
    return 0u;
L_101089e2: ;
    if (arg1 + 8u == 0u)
    {
        ebx = 0u;
        edi = esi;
    }
    else
    {
        edi = esi;
        eax = 0u;
L_101089ee: ;
        if (eax + 0xcu < arg1 + 8u)
        {
            eax = eax + 0xcu;
            edi = edi + 0xcu;
            goto L_101089ee;
        }
        ebx = eax + 0xcu;
        edi = edi + 0xcu;
    }
    if (ebx + 0xcu > rd16(esi + 6u))
    {
        eax = rd16(esi + 6u);
        edx = ebx + 0xcu;
    }
    else
    {
        edx = ebx + 0xcu;
        wr32(edi, 0u);
        t2 = rd16(esi + 6u);
        wr16(edi + 6u, (uint16_t)(t2 - (uint16_t)ebx));
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t3 = cow_thiscall(g, COW_IMG(0x10108870u), self, 1, edi);
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            eax = t3;
            edx = t4;
            ebp = (in_ebp & 0xffff0000u) | (uint16_t)(t2 - (uint16_t)ebx);
            wr16(eax + 4u, (uint16_t)ebp);
        }
        g->edi = edi;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t5 = cow_thiscall(g, COW_IMG(0x10108700u), self, 1, edi);
        t6 = g->edx;
        wr16(esi + 6u, (uint16_t)ebx);
        wr16(edi + 4u, (uint16_t)ebx);
        eax = t5;
        edx = t6;
    }
    wr32(esi, self);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10108d80u), eax, self, g->edx, 0, 1, esi);
    t7 = g->edx;
    edx = t7;
L_10108a48: ;
    eax = esi;
L_10108a4a: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10108990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10108990(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
