/* f_0x10130170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10130170(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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

    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x2eu);
    if ((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u) < 0)
    {
        eax = t1;
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
        ebx = rd32(self + 0x1e8u);
        goto L_101301fc;
    }
    eax = t1;
    ecx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
    edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    ebx = rd32(self + 0x1e8u);
    if ((int32_t)ecx >= 8) goto L_101301fc;
    if (rd32(ecx * 0x48u + rd32(COW_IMG(0x104dfd98u)) + 0x2c7d8u) > 0x10u)
    {
        edx = ecx * 9u + 0x58fbu;
        esi = 0u;
        goto L_1013021e;
    }
    ebp = rd32(ecx * 0x48u + rd32(COW_IMG(0x104dfd98u)) + 0x2c7d8u);
    ecx = ecx * 0x48u + rd32(COW_IMG(0x104dfd98u)) + 0x2c7d8u;
    t2 = rd32(COW_IMG(0x10130258u) + rd8(COW_IMG(0x10130270u) + ebp) * 4u);
    switch (t2 - RD)
    {
    case 0x101301c4u: edx = rd8(COW_IMG(0x10130270u) + ebp); goto L_101301c4;
    case 0x101301d5u: edx = rd8(COW_IMG(0x10130270u) + ebp); goto L_101301d5;
    case 0x101301e6u: edx = rd8(COW_IMG(0x10130270u) + ebp); goto L_101301e6;
    case 0x101301ebu: edx = rd8(COW_IMG(0x10130270u) + ebp); goto L_101301eb;
    case 0x1013020fu: edx = rd8(COW_IMG(0x10130270u) + ebp); goto L_1013020f;
    case 0x1013021eu: edx = rd8(COW_IMG(0x10130270u) + ebp); esi = 0u; goto L_1013021e;
    default: rt_fatal(g, COW_IMG(0x101301bdu), "switch");
    }
    return;
L_101301c4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x2fu);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    esi = ecx + 4u;
L_1013021e: ;
    wr32(rd32(COW_IMG(0x10578470u)) + 0x18u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x1014f7d0u), rd32(COW_IMG(0x10578470u)), 1, eax);
    t10 = g->edx;
    if (rd32(self + 0x1ecu) != ebx)
    {
        eax = t9;
        edx = t10;
        if (rd32(COW_IMG(0x105781f8u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x105781f8u));
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, ebx, 2u);
        }
        wr32(self + 0x1ecu, ebx);
    }
    return;
L_101301d5: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x30u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    esi = ecx + 4u;
    goto L_1013021e;
L_101301e6: ;
    esi = ecx + 4u;
    goto L_1013021e;
L_101301eb: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x31u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    esi = ecx + 4u;
    goto L_1013021e;
L_101301fc: ;
    if (edx == 0xbu) goto L_1013020f;
    if (edx == 9u) goto L_1013020f;
    if (edx == 0xau) goto L_1013020f;
    ebx = 0u;
L_10130219: ;
    esi = COW_IMG(0x103d3c84u);
    goto L_1013021e;
L_1013020f: ;
    if (rd16(self + 0x1b4u) != 0x10u)
    {
        esi = 0u;
        goto L_1013021e;
    }
    goto L_10130219;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10130170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10130170(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
