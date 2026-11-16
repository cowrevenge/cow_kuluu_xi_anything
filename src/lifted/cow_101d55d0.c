/* f_0x101d55d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101d55d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x101d6020u), 0);
    t2 = g->edx;
    if (arg1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101d560b;
    }
    eax = t1;
    edx = t2;
    if (arg1 != 1u) goto L_101d567c;
    wr32(self + 0x40u, 2u);
    wr32(self + 0x3cu, 0xb4u);
    wr8(COW_IMG(0x10482f18u), 1u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100a17f0u), 1, 0u);
    return;
L_101d560b: ;
    wr32(self + 0x3cu, 0xb4u);
    wr32(self + 0x40u, 1u);
    if ((uint8_t)eax == 0u)
    {
        ecx = arg1;
    }
    else
    {
        g->eax = eax;
        g->ecx = arg1;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_cdecl(g, COW_IMG(0x100a1860u), 1, 0x50u);
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
    }
    wr8(COW_IMG(0x10482f18u), 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_stdcall(g, COW_IMG(0x100a0080u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint16_t)t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        if (rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 0xa0u) != 0u)
        {
            esi = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 0xa0u);
            g->edx = edx;
            g->esp = sp0 - 4u;
            t9 = cow_thiscall_cdecl(g, COW_IMG(0x10062ed0u), ecx, 4, 0xbf8u, 0x6e69616du, esi, esi);
            t10 = g->ecx;
            t11 = g->edx;
            if ((uint8_t)t9 == 0u)
            {
                eax = t9;
                ecx = t10;
                edx = t11;
                g->esp = sp0 - 4u;
                cow_cdecl(g, COW_IMG(0x10062e20u), 5, 0xbf8u, 0x6e69616du, esi, esi, 0u);
            }
        }
    }
L_101d567c: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d55d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d55d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
