/* f_0x1020cc90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1020cc90(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x100e47c0u), 1, 8u);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        edx = t5;
    }
    else
    {
        edx = t5;
        esi = t1;
        if (rd32(COW_IMG(0x104dfd98u)) == 0u)
        {
            eax = rd32(COW_IMG(0x104dfd98u));
            goto L_1020ccbb;
        }
        eax = rd32(COW_IMG(0x104dfd98u));
        if (rd8(eax + 0x40decu) >= 6u) goto L_1020ccf4;
L_1020ccbb: ;
        if (esi == 0u) goto L_1020ccce;
        if ((rd32(esi + 0x128u) >> 0xbu & 7u) >= 3u)
        {
            eax = (rd32(esi + 0x128u) >> 0xbu & 0xffffff00u) | (rd32(esi + 0x128u) >> 0xbu & 7u);
            goto L_1020ccf4;
        }
        eax = (rd32(esi + 0x128u) >> 0xbu & 0xffffff00u) | (rd32(esi + 0x128u) >> 0xbu & 7u);
L_1020ccce: ;
        g->eax = eax;
        g->edx = edx;
        t6 = rd32(self + 8u);
        g->esp = sp0 - 8u;
        t7 = cow_thiscall(g, COW_IMG(0x10118b60u), t6, 2, 5u, 1u);
        t8 = g->ecx;
        t9 = g->edx;
        g->edx = t9;
        t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x41cu);
        t11 = g->edx;
        g->edi = self;
        g->edx = t11;
        t12 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 1u, t10);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
L_1020ccf4: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020cc90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020cc90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
