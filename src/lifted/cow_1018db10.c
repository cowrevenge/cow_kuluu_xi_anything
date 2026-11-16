/* f_0x1018db10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1018db10(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)(rd32(sp0 + 8u) + 1u) >= (int32_t)rd32(sp0 + 0xcu)) goto L_1018db98;
    ecx = rd32(sp0 + 0xcu);
    ebp = rd32(sp0 + 8u);
    edi = arg4;
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
    wr32(sp0 + 0xcu, t1);
    if ((int32_t)ebp <= 0)
    {
        esi = 0u;
    }
    else
    {
        esi = 0u;
        edi = arg1;
L_1018db41: ;
        t2 = rd32(sp0 + 0xcu);
        g->eax = t2;
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, rd32(rd32(edi) + 8u), edi, 2, arg4, t2);
        if (t3 == 0u) goto L_1018db5a;
        if ((int32_t)(esi + 1u) < (int32_t)ebp)
        {
            esi = esi + 1u;
            edi = edi + 0x18u;
            goto L_1018db41;
        }
        esi = esi + 1u;
    }
L_1018db5a: ;
    if (esi != ebp) goto L_1018db98;
    t4 = rd32(sp0 + 0xcu);
    wr8(sp0 + 8u, 0u);
    wr8(sp0 + 9u, 0u);
    wr8(sp0 + 0xau, 0u);
    wr8(sp0 + 0xbu, 0u);
    t5 = rd32(sp0 + 8u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101bc7b0u), arg1 + esi * 0x18u, 3, arg4, t4, t5);
    return 1u;
L_1018db98: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018db10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018db10(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
