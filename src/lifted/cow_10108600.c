/* f_0x10108600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10108600(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = arg1;
        edx = in_edx;
        goto L_10108687;
    }
    t1 = rd16(arg1 - 2u) - 8u;
    t2 = rd32(arg1 - 8u);
    edi = arg1;
    eax = 0xafafafafu;
    ecx = t1 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t1 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->eax = eax;
    g->edx = arg1 - 8u;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x10108a50u), t2, 1, arg1 - 8u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10108870u), t2, 1, t2 + 0x14u);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        edx = t6;
        goto L_10108687;
    }
    eax = t5;
    edx = t6;
    esi = t2;
    edi = t2 + 0x14u;
    if (rd32(edi) != 0u) goto L_10108687;
    if (rd32(esi) == 0u)
    {
        ecx = esi;
        edx = rd32(esi);
    }
    else
    {
        edx = rd32(esi);
        eax = edx;
L_10108656: ;
        if (rd32(eax) != 0u)
        {
            eax = rd32(eax);
            goto L_10108656;
        }
        ecx = eax;
        t7 = rd32(esi + 4u);
        wr32(edx + 4u, t7);
    }
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    }
    else
    {
        eax = rd32(esi + 4u);
        t8 = rd32(esi);
        wr32(eax, t8);
        edx = t8;
    }
    if (rd32(ecx + 0xcu) == 0u)
    {
        ecx = rd32(ecx + 0xcu);
        loc_c = esi;
        goto L_1010867f;
    }
    ecx = rd32(ecx + 0xcu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, ecx, ecx, 0);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_1010867f: ;
    g->eax = eax;
    g->esp = sp0;
    t11 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, loc_c, in_edi, in_esi);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_10108687: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10108600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10108600(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
