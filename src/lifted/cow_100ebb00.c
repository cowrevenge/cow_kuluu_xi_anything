/* f_0x100ebb00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ebb00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        goto L_100ebb4c;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    eax = 0u;
    ecx = ecx + 0x194c6u;
L_100ebb21: ;
    if (eax == (uint8_t)arg3) goto L_100ebb31;
    if ((uint8_t)arg1 == 0u) goto L_100ebb31;
    if (eax == 0u) goto L_100ebb31;
    if (rd8(ecx) == (uint8_t)arg1) goto L_100ebb50;
L_100ebb31: ;
    if (eax + 1u < 0xau)
    {
        eax = eax + 1u;
        ecx = ecx + 8u;
        goto L_100ebb21;
    }
    ecx = ecx + 8u;
    g->edx = (uint8_t)arg3;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x34u, 0u, 0u);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        edx = t6;
        goto L_100ebb73;
    }
    eax = t5;
L_100ebb4c: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_100ebb50: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = (uint8_t)arg3;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x80u);
    t2 = g->ecx;
    t3 = g->edx;
    g->ebx = arg1;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 9u, 0u, 0u, 0u, 0u, t1, 9u);
    g->ebx = in_ebx;
    return t4 & 0xffffff00u;
L_100ebb73: ;
    wr8(eax + 0xau, (uint8_t)arg1);
    wr32(eax + 4u, arg2);
    wr8(eax + 0xbu, (uint8_t)arg3);
    t7 = rd16((uint8_t)arg1 * 0x2cu + rd32(COW_IMG(0x104dfd98u)) + 0x9868u);
    t8 = rd32(COW_IMG(0x104dfd98u));
    wr16(eax + 8u, (uint16_t)t7);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0xcu, 0u);
    g->ebx = in_ebx;
    return (t9 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ebb00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ebb00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
