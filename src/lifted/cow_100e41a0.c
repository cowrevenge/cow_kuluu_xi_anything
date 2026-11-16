/* f_0x100e41a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e41a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x96u, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_100e41bc;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_100e41bc: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100e4240u), 1, arg1);
    t5 = g->ecx;
    t6 = g->edx;
    t7 = rd8(arg1 + 4u);
    wr8(esi + 4u, (uint8_t)t7);
    t8 = rd16(arg1 + 6u);
    wr16(esi + 6u, (uint16_t)t8);
    t9 = rd8(arg1 + 8u);
    wr8(esi + 8u, (uint8_t)t9);
    t10 = rd8(arg1 + 9u);
    wr8(esi + 9u, (uint8_t)t10);
    if ((uint8_t)t10 == 0u)
    {
        ecx = (t5 & 0xffff0000u) | t8;
        edx = (t6 & 0xffffff00u) | t9;
    }
    else
    {
        edx = (t6 & 0xffffff00u) | t9;
        eax = esi + 0x1au;
        ecx = esi + 0xau;
        ebp = 0xffffffe6u - esi;
        edi = arg1 - esi;
L_100e41f9: ;
        t11 = rd16(ecx + edi);
        wr16(ecx, (uint16_t)t11);
        wr8(eax, rd8(eax + edi));
        if ((int32_t)(eax + ebp + 1u) < (int32_t)rd8(esi + 9u))
        {
            ecx = ecx + 2u;
            edx = eax + ebp + 1u;
            eax = eax + 1u;
            goto L_100e41f9;
        }
        ecx = ecx + 2u;
        edx = eax + ebp + 1u;
    }
    t12 = rd32(COW_IMG(0x104dfd98u));
    wr32(t12 + 0x19dd4u, 1u);
    g->eax = t12;
    g->esp = sp0 - 8u;
    t13 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, esi, 0x22u, 0u);
    return (t13 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e41a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e41a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
