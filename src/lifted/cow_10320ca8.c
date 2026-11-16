/* f_0x10320ca8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10320ca8(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((arg2 & 8u) == 0u)
    {
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        ebx = (in_ebx & 0xffffff00u) | 0x20u;
    }
    if ((arg2 >> 8u & 0x40u) != 0u)
    {
        ebx = (ebx & 0xffffff00u) | (uint8_t)(ebx | 0x80u);
    }
    if ((arg2 & 0x80u) != 0u)
    {
        ebx = (ebx & 0xffffff00u) | (uint8_t)(ebx | 0x10u);
    }
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x103290e8u)), self, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10320ce6;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, rd32(COW_IMG(0x10329168u)), ecx, 0);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_cdecl(g, COW_IMG(0x10319c16u), 1, t4);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_10320d17: ;
    eax = 0xffffffffu;
L_10320d4b: ;
    g->edx = edx;
    return eax;
L_10320ce6: ;
    if (eax != 2u)
    {
        if (eax == 3u)
        {
            ebx = (ebx & 0xffffff00u) | (uint8_t)(ebx | 8u);
        }
    }
    else
    {
        ebx = (ebx & 0xffffff00u) | (uint8_t)(ebx | 0x40u);
    }
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t9 = cow_fastcall(g, COW_IMG(0x10320a48u), ecx, edx, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0xffffffffu)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        esi = t9;
        goto L_10320d1c;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(t12, 0x18u);
    g->edx = t14;
    t15 = cow_stdcall(g, COW_IMG(0x10319c92u), 0);
    t16 = g->edx;
    wr32(t15, 0u);
    eax = t15;
    edx = t16;
    goto L_10320d17;
L_10320d1c: ;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10320b6bu), g->eax, g->ecx, edx, 1, 2, esi, arg1);
    t17 = g->edx;
    t18 = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)esi >> 5u) * 4u);
    wr8((esi & 0x1fu) * 0x24u + t18 + 4u, (uint8_t)(ebx | 1u));
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10320daeu), g->eax, g->ecx, t17, 1, 1, esi);
    t19 = g->edx;
    eax = esi;
    edx = t19;
    goto L_10320d4b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10320ca8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10320ca8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
