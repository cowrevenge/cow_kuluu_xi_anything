/* f_0x100e94d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e94d0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    edi = arg3;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t1 = ~ecx - 1u;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        goto L_100e950e;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    ecx = t1;
    edi = t1;
    if ((int32_t)edi <= 0)
    {
        edx = in_edx;
        goto L_100e950e;
    }
    if (edi >= 0xfau)
    {
        edx = in_edx;
        goto L_100e950e;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x75u, 0u, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        esi = t2;
        goto L_100e9514;
    }
    eax = t2;
    edx = t4;
L_100e950e: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100e9514: ;
    wr8(esi + 7u, (uint8_t)arg2);
    wr8(esi + 6u, (uint8_t)arg1);
    g->ecx = (ecx & 0xffffff00u) | (uint8_t)arg1;
    g->edx = esi + 8u;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x10312090u), (eax & 0xffffff00u) | (uint8_t)arg2, g->ecx, g->edx, 1, 3, esi + 8u, arg3, edi);
    t6 = g->ecx;
    t7 = g->edx;
    wr8(edi + esi + 8u, 0u);
    g->edx = t7;
    g->esp = sp0 - 0x18u;
    t8 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, esi, 0xau, edi);
    t9 = g->edx;
    g->edx = t9;
    return (t8 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e94d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e94d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
