/* f_0x102f40c5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102f40c5(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = cow_stdcall(g, COW_IMG(0x102f3ff0u), 0);
    if ((t1 & 0x20u) != 0u)
    {
        eax = t1;
        if ((int8_t)eax < 0)
        {
            wr32(arg1, COW_IMG(0x10301e58u));
            wr32(arg1 + 4u, COW_IMG(0x1030139au));
            wr32(arg1 + 8u, COW_IMG(0x10302119u));
            wr32(arg1 + 0xcu, COW_IMG(0x102fd20cu));
            wr32(arg1 + 0x14u, COW_IMG(0x10301eadu));
            wr32(arg1 + 0x18u, COW_IMG(0x1030140bu));
            wr32(arg1 + 0x1cu, COW_IMG(0x10301472u));
            wr32(arg1 + 0x20u, COW_IMG(0x1030219bu));
            wr32(arg1 + 0x24u, COW_IMG(0x10301ee6u));
            wr32(arg1 + 0x28u, COW_IMG(0x10301952u));
            wr32(arg1 + 0x2cu, COW_IMG(0x102fd43eu));
            wr32(arg1 + 0x30u, COW_IMG(0x10302543u));
            wr32(arg1 + 0x34u, COW_IMG(0x10302586u));
            wr32(arg1 + 0x38u, COW_IMG(0x10301957u));
            wr32(arg1 + 0x3cu, COW_IMG(0x10301adfu));
            wr32(arg1 + 0x40u, COW_IMG(0x103021fau));
            wr32(arg1 + 0x44u, COW_IMG(0x10301f4au));
            wr32(arg1 + 0x48u, COW_IMG(0x1030137eu));
            wr32(arg1 + 0x4cu, COW_IMG(0x102fbc00u));
            wr32(arg1 + 0x50u, COW_IMG(0x102fbc99u));
            wr32(arg1 + 0x54u, COW_IMG(0x10302728u));
            wr32(arg1 + 0x58u, COW_IMG(0x1030266au));
            wr32(arg1 + 0x5cu, COW_IMG(0x102fbcf6u));
            wr32(arg1 + 0x60u, COW_IMG(0x102fbda9u));
            wr32(arg1 + 0x64u, COW_IMG(0x102fc1dau));
            wr32(arg1 + 0x68u, COW_IMG(0x102fd50du));
            wr32(arg1 + 0x6cu, COW_IMG(0x102fd55du));
            wr32(arg1 + 0x70u, COW_IMG(0x102fd648u));
            wr32(arg1 + 0x74u, COW_IMG(0x102fc29fu));
            wr32(arg1 + 0x78u, COW_IMG(0x102fd724u));
            wr32(arg1 + 0x7cu, COW_IMG(0x102fd787u));
            wr32(arg1 + 0x80u, COW_IMG(0x102fd7e5u));
            wr32(arg1 + 0x84u, COW_IMG(0x102fd83eu));
            wr32(arg1 + 0x88u, COW_IMG(0x1030278cu));
            wr32(arg1 + 0x8cu, COW_IMG(0x102fc30bu));
            wr32(arg1 + 0x90u, COW_IMG(0x102fc442u));
            wr32(arg1 + 0x94u, COW_IMG(0x102fd885u));
            wr32(arg1 + 0x98u, COW_IMG(0x102fd92du));
            wr32(arg1 + 0x9cu, COW_IMG(0x102fdab4u));
            wr32(arg1 + 0xa0u, COW_IMG(0x102fec4cu));
            wr32(arg1 + 0xa4u, COW_IMG(0x102fedf1u));
            wr32(arg1 + 0xa8u, COW_IMG(0x102ff325u));
            wr32(arg1 + 0xacu, COW_IMG(0x102fc4cfu));
            wr32(arg1 + 0xb0u, COW_IMG(0x102fc561u));
            wr32(arg1 + 0xd8u, COW_IMG(0x1030232cu));
            wr32(arg1 + 0xccu, COW_IMG(0x103014d1u));
            wr32(arg1 + 0xc0u, COW_IMG(0x10301fe2u));
            wr32(arg1 + 0xb8u, COW_IMG(0x1030202bu));
            wr32(arg1 + 0xd0u, COW_IMG(0x1030239du));
            wr32(arg1 + 0xc4u, COW_IMG(0x10301542u));
            wr32(arg1 + 0xdcu, COW_IMG(0x102fc5c5u));
            wr32(arg1 + 0xe0u, COW_IMG(0x102fc66cu));
            wr32(arg1 + 0xd4u, COW_IMG(0x10302465u));
            wr32(arg1 + 0xbcu, COW_IMG(0x1030206eu));
            wr32(arg1 + 0xc8u, COW_IMG(0x10301616u));
            wr32(arg1 + 0x10u, COW_IMG(0x10300c52u));
            wr32(arg1 + 0xb4u, COW_IMG(0x102fc7b3u));
            if (eax >> 8u & 1u)
            {
                if ((eax >> 8u & 2u) != 0u)
                {
                    wr32(arg1 + 0x3cu, COW_IMG(0x10301d05u));
                    wr32(arg1 + 0x48u, COW_IMG(0x10300970u));
                    wr32(arg1 + 0x98u, COW_IMG(0x102fd9ffu));
                    wr32(arg1 + 0x9cu, COW_IMG(0x102ff81cu));
                    wr32(arg1 + 0x60u, COW_IMG(0x102fbfc5u));
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f40c5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f40c5(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
