/* f_0x10098210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10098210(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(self + 0xeeu) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0xeeu);
        goto L_10098237;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0xeeu);
    if ((uint8_t)eax == 1u) goto L_10098237;
    if ((uint8_t)eax == 2u) goto L_10098237;
    if ((uint8_t)eax == 6u) goto L_10098237;
    if ((uint8_t)eax == 7u) goto L_10098237;
    if ((uint8_t)eax == 8u) goto L_10098237;
    return eax & 0xffffff00u;
L_10098237: ;
    if ((rd32(self + 0x120u) & 0x4000u) == 0u)
    {
        esi = rd32(self + 0x120u);
        goto L_1009824c;
    }
L_10098245: ;
    return eax & 0xffffff00u;
L_1009824c: ;
    if ((esi & 0x8000u) == 0u) goto L_1009825b;
    return eax & 0xffffff00u;
L_1009825b: ;
    if ((esi & 0x40000u) == 0u) goto L_1009826a;
    return eax & 0xffffff00u;
L_1009826a: ;
    if ((rd8(self + 0x128u) & 0x40u) == 0u)
    {
        edx = in_edx;
        goto L_10098292;
    }
    if ((uint8_t)arg1 == 0u) goto L_10098245;
    if (rd8(self + 0x1ffu) < 2u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x1ffu);
        goto L_10098292;
    }
    edx = (in_edx & 0xffffff00u) | rd8(self + 0x1ffu);
    if ((uint8_t)edx > 0x63u) goto L_10098292;
    return eax & 0xffffff00u;
L_10098292: ;
    if (!(esi >> 7u & 1u))
    {
        ebx = esi >> 7u;
        goto L_100982b5;
    }
    ebx = esi >> 7u;
    if (rd8(COW_IMG(0x104807f5u)) == 0u) goto L_100982b5;
    edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
    if ((esi & 0x20000u) == 0u) goto L_100982d1;
    return eax & 0xffffff00u;
L_100982b5: ;
    if ((int8_t)rd32(self + 0x130u) >= 0)
    {
        edx = rd32(self + 0x130u);
        goto L_100982c6;
    }
    return eax & 0xffffff00u;
L_100982c6: ;
    if ((int8_t)(edx >> 8u) >= 0) goto L_100982d1;
    return eax & 0xffffff00u;
L_100982d1: ;
    if ((uint8_t)eax == 2u) goto L_100982d9;
    if ((uint8_t)eax != 7u)
    {
        ecx = self;
        goto L_100982e9;
    }
L_100982d9: ;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10098180u), eax, self, g->edx, 1, 0);
    t2 = g->ecx;
    if ((uint8_t)t1 == 0u)
    {
        ecx = t2;
        goto L_100982e9;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_100982e9: ;
    if (!(rd32(ecx + 0x124u) >> 0xcu & 1u)) goto L_1009830c;
    eax = rd32(ecx + 0x124u) >> 0xcu;
    if (ebx & 1u) goto L_1009830c;
    if (esi >> 8u & 1u) goto L_1009830c;
    return eax & 0xffffff00u;
L_1009830c: ;
    return (rd32(ecx + 0x130u) >> 0x15u & 0xffffff00u) | (~(uint8_t)(rd32(ecx + 0x130u) >> 0x15u) & 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10098210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10098210(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
