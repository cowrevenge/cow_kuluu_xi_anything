/* f_0x100aed00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_100aed00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr8(COW_IMG(0x104807f5u), 0u);
    wr8(COW_IMG(0x104855a8u), 0u);
    wr8(COW_IMG(0x1047faafu), 0u);
    wr8(COW_IMG(0x1047fab0u), 0u);
    wr8(COW_IMG(0x1048557au), 0u);
    wr8(COW_IMG(0x10488208u), 0u);
    wr32(COW_IMG(0x104886dcu), (uint16_t)arg2);
    wr8(COW_IMG(0x10485a70u), 0u);
    wr8(COW_IMG(0x104804c2u), 0u);
    wr8(COW_IMG(0x104808f0u), 0u);
    wr8(COW_IMG(0x10487034u), 0u);
    wr8(COW_IMG(0x10488100u), 1u);
    wr16(COW_IMG(0x104808fcu), 0u);
    wr8(COW_IMG(0x104898f8u), 0u);
    wr8(COW_IMG(0x104897f4u), 0u);
    wr8(COW_IMG(0x104886f4u), 0u);
    wr16(COW_IMG(0x104899b2u), 0u);
    wr16(COW_IMG(0x104899b0u), 0u);
    wr8(COW_IMG(0x10488b00u), 0u);
    wr8(COW_IMG(0x104886b8u), 1u);
    wr8(COW_IMG(0x104882b4u), 8u);
    wr16(COW_IMG(0x104896e6u), 0u);
    wr16(COW_IMG(0x104897f6u), 0u);
    wr8(COW_IMG(0x104886dau), 0u);
    wr8(COW_IMG(0x104886dbu), 0u);
    wr32(COW_IMG(0x104898fcu), 0u);
    wr32(COW_IMG(0x10488978u), 0u);
    wr32(COW_IMG(0x10489910u), 0u);
    wr32(COW_IMG(0x10489918u), 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x100aece0u), 0);
    t1 = g->edx;
    edi = COW_IMG(0x10488838u);
    eax = 0u;
    ecx = 0x50u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x104896e8u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x104897f8u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(COW_IMG(0x104887f8u), 0u);
    wr32(COW_IMG(0x104887fcu), 0u);
    if ((uint16_t)arg4 < 0x3e8u)
    {
        edx = t1;
        goto L_100aee0a;
    }
    edx = t1;
    if ((uint16_t)arg4 <= 0x513u)
    {
        eax = arg4;
        goto L_100aee17;
    }
L_100aee0a: ;
    if ((uint16_t)arg1 == (uint16_t)arg3)
    {
        eax = arg3;
        esi = arg1;
        goto L_100aee1d;
    }
    eax = arg3;
L_100aee17: ;
    esi = eax + 0x3e8u;
L_100aee1d: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100aeb80u), 3, esi, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    g->ebx = 0u;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x100ae1e0u), g->eax, g->ecx, t4, 1, 3, esi, esi, in_edi);
    t5 = rd16(COW_IMG(0x10485f7au));
    wr8(COW_IMG(0x1035cfa0u), 0u);
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)t5 * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)t5 * 4u);
        ecx = (uint32_t)(int16_t)t5;
        if (rd32(eax + 0x120u) >> 9u & 1u)
        {
            edx = rd32(eax + 0x120u) >> 9u;
            wr8(COW_IMG(0x1035cfa0u), rd8(COW_IMG(0x10487f80u)));
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
        }
    }
    eax = COW_IMG(0x10480af0u);
L_100aee6f: ;
    if (rd32(eax) != 0u)
    {
        ecx = rd32(eax);
        wr16(ecx + 0x1fcu, 0u);
        wr8(rd32(eax) + 0x1feu, 0u);
    }
    if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x10482ef0u))
    {
        eax = eax + 4u;
        goto L_100aee6f;
    }
    eax = eax + 4u;
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100aed00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100aed00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
