/* f_0x100377a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=9 */
uint32_t cow_fn_100377a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg8 == 0u)
    {
        eax = arg8;
        ecx = self;
        edx = 5u;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        if (arg8 == 1u)
        {
            eax = arg8 - 1u;
            ecx = self;
            edx = arg9;
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
        else
        {
            if (arg8 != 2u)
            {
                eax = arg8 - 2u;
                ecx = self;
                edx = 0u;
                ebx = in_ebx & 0xffffff00u;
            }
            else
            {
                g->eax = arg8 - 2u;
                g->esp = sp0 - 0x10u;
                t1 = cow_thiscall(g, rd32(COW_IMG(0x10329400u)), self, 0);
                t2 = cow_divu(g, t1, 6u);
                t3 = cow_modu(g, t1, 6u);
                eax = t2;
                ecx = 6u;
                edx = t3;
                ebx = (in_ebx & 0xffffff00u) | 1u;
            }
        }
    }
    if ((int32_t)edx < 0)
    {
        ebp = 0u;
        goto L_100377f4;
    }
    esi = edx;
L_100377df: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x102455a0u), eax, ecx, g->edx, 1, 1, esi);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int8_t)t4 >= 0)
    {
        eax = t4;
        ecx = t5;
        goto L_100377f1;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    if ((int32_t)(esi - 1u) >= 0)
    {
        esi = esi - 1u;
        goto L_100377df;
    }
    ebp = 0u;
L_100377f4: ;
    if (rd32(COW_IMG(0x10351718u) + ebp * 0xcu) != 0u)
    {
        edx = ebp * 3u;
        edi = rd32(COW_IMG(0x10351718u) + ebp * 0xcu);
    }
    else
    {
        edx = ebp * 3u;
        edi = arg1;
    }
    if (rd32(COW_IMG(0x10463944u)) != edi)
    {
        wr32(COW_IMG(0x10463944u), edi);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t7 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x5cu, 4u);
        t8 = g->edx;
        g->esp = sp0 - 0x10u;
        t9 = cow_fastcall(g, COW_IMG(0x100748f0u), t7, t8, 0);
        t10 = g->edx;
        wr8(COW_IMG(0x1047d13cu), 1u);
        if (t7 == 0u)
        {
            eax = t9;
        }
        else
        {
            eax = t9;
            edx = t10;
            esi = t7;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10074740u), eax, esi, edx, 1, 0);
            t11 = g->edx;
            wr32(esi, COW_IMG(0x1032a990u));
            if (rd32(COW_IMG(0x10463948u)) == 0u)
            {
                ecx = rd32(COW_IMG(0x10463948u));
            }
            else
            {
                ecx = rd32(COW_IMG(0x10463948u));
                edx = t11;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
                t12 = g->ecx;
                ecx = t12;
            }
            wr8(esi + 0x35u, 0u);
            wr8(esi + 0x34u, (uint8_t)arg7);
            wr32(COW_IMG(0x10463948u), esi);
            wr32(esi + 0x44u, arg4);
            wr32(esi + 0x3cu, edi);
            wr32(esi + 0x40u, arg3);
            wr32(esi + 0x48u, arg5);
            wr32(esi + 0x4cu, arg6);
            wr32(esi + 0x50u, ebp);
            wr8(esi + 0x54u, (uint8_t)ebx);
            if ((int32_t)arg6 < 30)
            {
                wr32(esi + 0x4cu, 0x1eu);
            }
            wr32(esi + 0x38u, 0u);
            g->eax = arg6;
            g->esp = sp0 - 0x10u;
            t13 = cow_thiscall(g, COW_IMG(0x100749b0u), esi, 1, 5u);
            eax = t13;
        }
    }
    return eax;
L_100377f1: ;
    ebp = (uint32_t)(int8_t)eax;
    goto L_100377f4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100377a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100377a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
